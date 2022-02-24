/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:36:33 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 19:18:16 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	mAC = (a.getY() - c.getY()) / ((a.getX() - c.getX()));
	Fixed	mCB = (c.getY() - b.getY()) / ((c.getX() - b.getX()));
	Fixed	mBA = (b.getY() - a.getY()) / ((b.getX() - a.getX()));

	Fixed	kAC = a.getY() - mAC * a.getX();
	Fixed	kCB = c.getY() - mCB * c.getX();
	Fixed	kBA = b.getY() - mBA * b.getX();

	Fixed	x = mAC * point.getX() + kAC - point.getY();
	Fixed	y = mCB * point.getX() + kCB - point.getY();
	Fixed	z = mBA * point.getX() + kBA < point.getY();
	
	if (x > 0)
		return false;
	if (y < 0)
		return false;
	if (z < 0)
		return false;
	return true;
}
