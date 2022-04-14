/**
 * File              : Zombie.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 14.04.2022
 * Last Modified Date: 14.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include	<string>
#include	<iostream>

class Zombie
{
private:
	std::string	name;

public:
	Zombie( std::string	name );
	~Zombie( void );
	void		announce( void );
	std::string	getName( void );
	void		setName( std::string name );
};

Zombie* newZombie( std::string	name );
void	randomChump( std::string	name );

#endif /* ZOMBIE_HPP */
