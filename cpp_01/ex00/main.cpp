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
	Zombie* zombie = newZombie("Aymane");
	randomChump("Walid");
	delete zombie;
	return (0);
}
