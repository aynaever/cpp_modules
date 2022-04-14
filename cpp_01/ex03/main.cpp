/**
 * File              : main.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Weapon.hpp"
#include	"HumanA.hpp"
#include	"HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	/* { */
	/* 	Weapon club = Weapon("crude spiked club"); */
	/* 	HumanB jim("Jim"); */
	/* 	jim.setWeapon(club); */
	/* 	jim.attack(); */
	/* 	club.setType("some other type of club"); */
	/* 	jim.attack(); */
	/* } */
return 0;
}
