/**
 * File              : Weapon.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Weapon.hpp"

const std::string&	Weapon::getType( void )
{
	const std::string&	Type = Weapon::type;

	return	(Type);
}

void	Weapon::setType( std::string type )
{
	this->type = type;
}

Weapon::Weapon( std::string	type)
{
	this->type = type;
}
