/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   XPoint.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:42:29 by rcabezas          #+#    #+#             */
/*   Updated: 2022/02/24 12:46:02 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(float x, float y) : _x(x), _y(y)
{
	//std::cout << "Constructor called" << std::endl;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
	//std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(const Point &op)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this == &op)
		return *this;
	return *this;
}

Fixed	Point::getX(void) const
{
	return this->_x;
}

void	Point::setX(Fixed x)
{
	this->_x = x;
}

Fixed	Point::getY(void) const
{
	return this->_y; 
}

void	Point::setY(Fixed y)
{
	this->_y = y;
}
