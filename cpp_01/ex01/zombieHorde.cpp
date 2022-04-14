/**
 * File              : zombieHorde.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Zombie.hpp"

Zombie*	zombieHorde( int n, std::string	name )
{
	int	i;

	Zombie* zombie = new Zombie[n];
	i = 0;
	while (i < n)
	{
		zombie[i].setName(name);
		i++;
	}
	return (zombie);
}
