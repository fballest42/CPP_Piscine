/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:37:15 by fballest          #+#    #+#             */
/*   Updated: 2022/02/24 13:57:16 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// ORTODOXAL CONSTRUCTOR AND DESTRUCTOR

Point::Point(void): _x(0), _y(0)
{
	// std::cout << "Default constructor called, and values set to 0" << std::endl;
}

Point::Point(const Point &copy)
{
	// std::cout << "Copy consturctor called" << std::endl;
}

Point::Point(float x, float y): _x(x), _y(y)
{
	// std::cout << "Consturctor called and values setted to: X = " << this->getX() << " and Y = " << this->getY() << std::endl;
}

Point &Point::operator=(const Point &equal)
{
	// std::cout << "Assination operator called" << std::endl;
	if (this == &equal)
		return (*this);
	return (*this);
}

Point::~Point(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

void	Point::setX(Fixed x)
{
	this->_x = x;
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

void	Point::setY(Fixed y)
{
	this->_y = y;
}
