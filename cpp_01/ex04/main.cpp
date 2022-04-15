/**
 * File              : main.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 15.04.2022
 * Last Modified Date: 15.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"helpers.hpp"
#include	<cstdlib>

int main (int	argc, char** argv)
{
	std::ofstream	ofs;
	std::string		str;
	std::string		rfile;

	/* Check validity of arguments */
	if ( argc != 4 )
	{
		std::cout << "Enter three arguments as follows: <filename> \"String1\" \"String2\" "
				<< std::endl;
		return	(0);
	}

	/* copy string from file and then replace s1 to s2 */
	try
	{
		copy_to_str(&str, argv[1]);
		replace(&str, argv[2], argv[3]);
	}
	catch (int x)
	{
		std::cout << "Please Check the file" << std::endl;
		exit(0);
	}

	/* create .replace file */
	rfile.assign(argv[1]).append(".replace");
	ofs.open(rfile.c_str());

	/* write replaced string to .replace file */
	ofs.write(str.c_str(), str.size());

	/* close stream */
	ofs.close();

	return (0);
}
