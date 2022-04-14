/**
 * File              : HumanB.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"HumanB.hpp"

void	HumanB::attack( void )
{
	std::cout << this->name
		<< "attacks with their"
		<< this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon* weapon)
{
	this->weapon = weapon;
}

HumanB::HumanB( std::string	name )
{
	this->name = name;
}

