/**
 * File              : Harl.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 15.04.2022
 * Last Modified Date: 15.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef HARL_HPP
#define HARL_HPP

#include	<iostream>
#include	<string>

class Harl
{
private:
	void	debug ( void );
	void	info ( void );
	void	warning ( void );
	void	error ( void );

public:
	void	complain ( std::string	level );
};

#endif /* HARL_HPP */
