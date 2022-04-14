/**
 * File              : main.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Zombie.hpp"

int main()
{
	int	i;

	Zombie* zombie = zombieHorde(10, "Aymane");
	i = 0;
	while (i < 10)
	{
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
	return (0);
}
