/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:58:59 by fballest          #+#    #+#             */
/*   Updated: 2022/01/26 12:37:34 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _num(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy contructor called." << std::endl;
	this->_num = copy.getRawBits();
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called." << std::endl;
	this->_num = (i << this->_snum);
}

Fixed::Fixed(const float flo)
{
	std::cout << "Float constructor called." << std::endl;
	this->_num = roundf(float(flo * (1 << this->_snum)));
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Assignation operator called." << std::endl;
	this->_num = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

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

std::ostream& operator<<(std::ostream &ret, Fixed const &newop)
{
	ret << newop.toFloat();
	return (ret);
}

bool Fixed::operator>(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();

	if (a > b)
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();

	if (a < b)
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();

	if (a >= b)
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();

	if (a <= b)
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();

	if (a == b)
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();

	if (a != b)
		return (true);
	return (false);
}

Fixed &Fixed::operator+(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();
	Fixed	res(float(a + b));
	return (*this);
}

Fixed &Fixed::operator-(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();
	Fixed	res(a - b);
	return (*this);
}

Fixed &Fixed::operator*(Fixed const &fixed)
{
	float		a = 0, b = 0;
	a = toFloat();
	b = fixed.toFloat();
	Fixed	res (a * b);
	return (*this);
}

Fixed &Fixed::operator/(Fixed const &fixed)
{
	float		a, b;
	a = toFloat();
	b = fixed.toFloat();
	Fixed	res(a / b);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	float		a;
	a = toFloat() + (1 << this->_snum);
	Fixed	res(a);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	float		a;
	a = toFloat() - (1 << this->_snum);
	Fixed	res(a);
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	Fixed(Fixed const resul);
	this->_num = roundf(this->_num + (1 << this->_snum));
	return (resul);
}

Fixed &Fixed::operator--(void)
{
	float		a;
	a = toFloat() - (1 << this->_snum);
	Fixed	res(a);
	return (*this);
}
