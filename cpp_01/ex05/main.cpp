/**
 * File              : main.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 15.04.2022
 * Last Modified Date: 15.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Harl.hpp"

int main( void )
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	return (0);
}
