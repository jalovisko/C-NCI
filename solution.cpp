#include <iostream>
#include <vector>

#include "solution.h"


int solution(int input) {
	int digit1 = 3;
	int digit2 = 5;
    int larger = findLarger(input, digit1, digit2);
    return larger;
}

std::vector<int> getEachDigit(int x) {
    std::vector<int> allNumbers;
    while (x >= 10)
    {
        int digit = x % 10;
        allNumbers.push_back(digit);
        x = x / 10;
    }
    allNumbers.push_back(x);
    return allNumbers;
}

bool checkForTwoDigits(int input_number, int digit1, int digit2) {
    std::vector<int> allNumbers = getEachDigit(input_number);
    for (int i : allNumbers) {
        if ((i != digit1) && (i != digit2))
            return false;
    }
    return true;
}

int findLarger(int input_number, int digit1, int digit2) {
    while (!checkForTwoDigits(input_number, digit1, digit2))
        input_number++;
    return input_number;
}