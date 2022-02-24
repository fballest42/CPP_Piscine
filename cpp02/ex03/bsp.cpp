/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:56:40 by fballest          #+#    #+#             */
/*   Updated: 2022/02/24 13:58:55 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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
	
	
	std::cout << "mAC = " << mAC.toFloat() << " mCB = " << mCB.toFloat() << " mBA = " << mBA.toFloat() << std::endl;
	std::cout << "kAC = " << kAC.toFloat() << " kCB = " << kCB.toFloat() << " kBA = " << kBA.toFloat() << std::endl;
	std::cout << "X = " << x.toFloat() << " Y = " << y.toFloat() << " Z = " << z.toFloat() << std::endl;

	if (x > 0)
		return (true);
	if (y < 0)
		return (true);
	if (z < 0)
		return (true);
	return (false);
}

// {
// 	Point   D((b.getXX() - a.getXX()), (b.getYY() - a.getYY()));
// 	Point   E((c.getXX() - a.getXX()), (c.getYY() - a.getYY()));

// 	Fixed   w1((E.getX() * (a.getY() + point.getY()) + E.getY() * (point.getX() - a.getX()))
// 				/ ((D.getX() * E.getY()) - (D.getY() * E.getX())));
// 	Fixed   w2((Fixed(1) / E.getY()) * (point.getY() - a.getY() - (w1 * D.getY())));

// 	if (w1 >= 0)
// 		return(true);
// 	if (w2 >= 0)
// 		return(true);
// 	if (w1 + w2 <= 1)
// 		return(true);
// 	return (false);
// }

