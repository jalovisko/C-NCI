#include "solution.h"

#include <iostream>
#include <string>

int main() {
	std::cout << "Input the number: ";
	unsigned int input_number;
	std::cin >> input_number;
	std::cout << "The closest larger number made of 3 and 5 is: " << solution(input_number) << ".\n";
	return 0;
}