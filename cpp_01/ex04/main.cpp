/**
 * File              : main.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 15.04.2022
 * Last Modified Date: 15.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	<iostream>
#include	<fstream>
#include	"helpers.hpp"

int main (int	argc, char** argv) {
	std::string	str;

	copy_to_str(&str, argv[1]);

	std::cout << str << std::endl;
	return (0);
}
