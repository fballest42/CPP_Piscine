/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:56:40 by fballest          #+#    #+#             */
/*   Updated: 2022/03/01 11:01:48 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
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
		return (false);
	if (y < 0)
		return (false);
	if (z < 0)
		return (false);
	return (true);
}


// {
// 	Point   D;
// 	Point   E;
// 	D.setX(b.getX() - a.getX());
// 	D.setY(b.getY() - a.getY());
// 	E.setX((c.getX() - a.getX()));
// 	E.setY((c.getY() - a.getY()));
// 	Fixed   w1((E.getX() * (a.getY() + point.getY()) + E.getY() * (point.getX() - a.getX()))
// 				/ ((D.getX() * E.getY()) - (D.getY() * E.getX())));
// 	std::cout << "ESTE W1 = " << w1.toFloat() << std::endl;
// 	Fixed   w2((Fixed(1) / E.getY()) * (point.getY() - a.getY() - (w1 * D.getY())));
// 	std::cout << "ESTE W2 = " << w2.toFloat() << std::endl;
// 	if (w1 >= 0)
// 		return(true);
// 	if (w2 >= 0)
// 		return(true);
// 	if (w1 + w2 <= 1)
// 		return(true);
// 	return (false);
// }








