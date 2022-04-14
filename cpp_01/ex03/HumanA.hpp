/**
 * File              : HumanA.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include	"Weapon.hpp"
#include	<iostream>

class HumanA
{
private:
	std::string	name;
	Weapon&		weapon;

public:
	HumanA( const std::string	name, Weapon& weapon );
	void	attack( void );
};

#endif /* HUMANA_HPP */
