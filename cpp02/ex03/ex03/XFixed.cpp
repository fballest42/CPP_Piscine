/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:25:47 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/12 19:17:44 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

///////////////////////////////////////////////////////////////////////////////
////////////////////////// CLASS CREATION FUNCTIONS ///////////////////////////
///////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->_intVal = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_intVal = copy.getRawBits();
}

Fixed::Fixed(const int integer)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_intVal = integer << this->_nbBits;
}

Fixed::Fixed(const float floater)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_intVal = (floater * (1 << this->_nbBits));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	//std::cout << "Assignation operator called"<< std::endl;
	if (this == &fixed)
        return (*this);
    this->_intVal = fixed.getRawBits();
    return (*this);
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////// CLASS COMPARISON OPERATORS //////////////////////////
///////////////////////////////////////////////////////////////////////////////

bool	Fixed::operator==(const Fixed &b) const
{
	return this->getRawBits() == b.getRawBits();
}

bool	Fixed::operator!=(const Fixed &b) const
{
	return !(this->getRawBits() == b.getRawBits());
}

bool	Fixed::operator<(const Fixed &b) const
{
	return this->getRawBits() < b.getRawBits();
}

bool	Fixed::operator>(const Fixed &b) const
{
	return this->getRawBits() > b.getRawBits();
}

bool	Fixed::operator<=(const Fixed &b) const
{
	return this->getRawBits() <= b.getRawBits();
}

bool	Fixed::operator>=(const Fixed &b) const
{
	return this->getRawBits() >= b.getRawBits();
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////// CLASS ARITHMETIC OPERATORS //////////////////////////
///////////////////////////////////////////////////////////////////////////////

Fixed	Fixed::operator+(const Fixed &b) const
{
	float	aux;
	Fixed	ret;

	aux = this->toFloat();
	aux += b.toFloat();
	ret = Fixed(aux); 

	return ret;
}

Fixed	Fixed::operator-(const Fixed &b) const
{
	float	aux;
	Fixed	ret;

	aux = this->toFloat();
	aux -= b.toFloat();
	ret = Fixed(aux); 

	return ret;
}

Fixed	Fixed::operator*(const Fixed &b) const
{
	float	aux;
	Fixed	ret;

	aux = this->toFloat();
	aux *= b.toFloat();
	ret = Fixed(aux); 

	return ret;
}

Fixed	Fixed::operator/(const Fixed &b) const
{
	float	aux;
	Fixed	ret;

	aux = this->toFloat();
	aux /= b.toFloat();
	ret = Fixed(aux);

	return ret;
}

///////////////////////////////////////////////////////////////////////////////
//////////////////// CLASS INCREMENT/DECREMENT FUNCTIONS //////////////////////
///////////////////////////////////////////////////////////////////////////////

Fixed	Fixed::operator++(int)
{
	Fixed	pre = *this;

	this->setRawBits(this->getRawBits() + 1);
	return pre;
}

Fixed	Fixed::operator--(int)
{
	Fixed	pre = *this;

	this->setRawBits(this->getRawBits() - 1);
	return pre;
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//////////////////////////// CLASS UTIL FUNCTIONS /////////////////////////////
///////////////////////////////////////////////////////////////////////////////

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_intVal;
}

void	Fixed::setRawBits(int const raw)
{
	this->_intVal = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_intVal / (float)(1 << this->_nbBits);
}

int		Fixed::toInt(void) const
{
	return this->_intVal / (1 << this->_nbBits);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}
