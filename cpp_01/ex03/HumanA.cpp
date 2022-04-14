/**
 * File              : HumanA.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"HumanA.hpp"

void	HumanA::attack( void )
{
	std::cout << this->name
		<< " attacks with their "
		<< this->weapon.getType() << std::endl;
}

HumanA::HumanA( const std::string	name, Weapon& weapon ): weapon (weapon)
{
	this->weapon = weapon;
	this->name = name;
}
