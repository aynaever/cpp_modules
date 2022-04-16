/**
 * File              : Fixed.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 16.04.2022
 * Last Modified Date: 16.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Fixed.hpp"

Fixed::Fixed ( void ) {
	this->Fixed::fixedValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed ( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed ( Fixed& fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits ( fixed.getRawBits () );
}

Fixed& Fixed::operator=( Fixed& fixed ) {
	std::cout << "Copy assignement operator called" << std::endl;
	fixed.setRawBits ( this->getRawBits () );
	return *this;
}

int	Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::fixedValue);
}

void	Fixed::setRawBits ( const int raw )
{
	this->fixedValue = raw;
}
