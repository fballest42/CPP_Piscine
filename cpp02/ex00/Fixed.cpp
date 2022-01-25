/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:58:59 by fballest          #+#    #+#             */
/*   Updated: 2022/01/25 12:42:51 by fballest         ###   ########.fr       */
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
	std::cout << "getRawBits member funtion called." << std::endl;
	return (this->_num);
}

void Fixed::setRawBits (int const raw)
{
	this->_num = raw;
}
