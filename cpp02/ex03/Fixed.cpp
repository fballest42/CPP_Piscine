/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:58:59 by fballest          #+#    #+#             */
/*   Updated: 2022/03/01 10:47:54 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS AND DESTRUCTOR. //

Fixed::Fixed(void): _num(0)
{
	// std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy contructor called." << std::endl;
	this->_num = copy.getRawBits();
}

Fixed::Fixed(const int i)
{
	// std::cout << "Int constructor called." << std::endl;
	this->_num = (i << this->_snum);
}

Fixed::Fixed(const float flo)
{
	// std::cout << "Float constructor called." << std::endl;
	this->_num = roundf(float(flo * (1 << this->_snum)));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Assignation operator called." << std::endl;
	if (this == &fixed)
        return (*this);
	this->_num = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called." << std::endl;
}

// MEMBER FUNTIONS. //

int Fixed::getRawBits(void) const
{
	return (this->_num);
}

void Fixed::setRawBits (int const raw)
{
	this->_num = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_num / (float)(1 << this->_snum));
}

int		Fixed::toInt(void) const
{
	return (this->_num / (1 << this->_snum)); 
}

// COMPARASION MEMBER FUNTIONS. //

std::ostream& operator<<(std::ostream &ret, const Fixed &newop)
{
	ret << newop.toFloat();
	return (ret);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();

	if (a > b)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return !(this->getRawBits() == fixed.getRawBits());
}

// ARITMETICAL MEMBER FUNTIONS. //

Fixed Fixed::operator+(const Fixed &fixed) const
{
	float		a, b;
	a = this->toFloat();
	b = fixed.toFloat();
	Fixed	res(float(a + b));
	return (res);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	float		a, b;
	a = this->toFloat();
	b = fixed.toFloat();
	Fixed	res(a - b);
	return (res);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	float		a = 0, b = 0;
	a = this->toFloat();
	b = fixed.toFloat();
	Fixed	res (a * b);
	return (res);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	float		a, b;
	a = this->toFloat();
	b = fixed.toFloat();
	Fixed	res(a / b);
	return (res);
}

// POST AND PRE INCREMENTAL AND DECREMENTAL MEMBER FUNTION. //

Fixed Fixed::operator++(int)
{
	Fixed	res(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (res);
}

Fixed Fixed::operator--(int)
{
	Fixed	res(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (res);
}

Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

// MIN AND MAX MEMBER FUNTIONS. //

const Fixed	&Fixed::min(const Fixed &ca, const Fixed &cb)
{
	if (ca < cb)
		return (ca);
	return (cb);
}

const Fixed		&Fixed::max(const Fixed &ca, const Fixed &cb)
{
	if (ca > cb)
		return (ca);
	return (cb);
}
