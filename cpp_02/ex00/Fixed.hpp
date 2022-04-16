/**
 * File              : Fixed.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 16.04.2022
 * Last Modified Date: 16.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include	<iostream>

class	Fixed
{
private:
	int					fixedValue;
	const static int	nFBits { 8 };

public:
	Fixed ( void );
	~Fixed ( void );
	Fixed ( Fixed& fixed );
	Fixed& operator=( Fixed& fixed );
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
