/**
 * File              : randomChump.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
