/**
 * File              : main.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	<iostream>

int main()
{
	std::string	greeting ("HI THIS IS BRAIN");
	std::string*	stringPTR = &greeting;
	std::string&	stringREF = greeting;

	std::cout << "Memory Address of the string:" << &greeting << std::endl;
	std::cout << "Memory Address held by the pointer:" << stringPTR << std::endl;
	std::cout << "Memory Address held by the reference:" << &stringREF << std::endl;

	std::cout << greeting << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
