/**
 * File              : HumanB.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include	<iostream>
#include	"HumanA.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon*		weapon;

public:
	HumanB( std::string	name);
	void	attack( void );
	void	setWeapon( Weapon* weapon);
};

#endif /* HUMANB_HPP */
