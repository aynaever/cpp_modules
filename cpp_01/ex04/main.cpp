/**
 * File              : main.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 15.04.2022
 * Last Modified Date: 15.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"helpers.hpp"

int main (int	argc, char** argv)
{
	std::ofstream	ofs;
	std::string		rfile;

	rfile.assign(argv[1]).append(".replace");
	ofs.open(rfile.c_str());

	if ( argc != 4 )
		return	(0);

	std::string	str;

	copy_to_str(&str, argv[1]);
	replace(&str, argv[2], argv[3]);

	ofs.write(str.c_str(), str.size());

	std::cout << str << std::endl;
	return (0);
}
