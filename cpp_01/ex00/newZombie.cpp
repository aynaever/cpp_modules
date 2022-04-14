/**
 * File              : newZombie.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Zombie.hpp"

Zombie*	newZombie( std::string	name )
{
	Zombie* zombie = new Zombie(name);
	return (zombie);
}
