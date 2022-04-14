/**
 * File              : Zombie.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor Called" << std::endl;
}

void	Zombie::setName( std::string	name )
{
	this->name = name;
}
