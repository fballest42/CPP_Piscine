/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:58:59 by fballest          #+#    #+#             */
/*   Updated: 2022/01/25 12:57:24 by fballest         ###   ########.fr       */
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
	this->_num = int(flo * (1 << this->_snum));
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

std::ostream &operator<<(std::ostream &ret, Fixed const &newop)
{
	ret << newop.toFloat();
	return (ret);
}
