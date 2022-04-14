/**
 * File              : Weapon.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include	<iostream>

class Weapon
{
private:
	std::string	type;

public:
	Weapon( std::string	name);
	const std::string&	getType( void );
	void			setType( std::string type );
};

#endif /* WEAPON_HPP */
