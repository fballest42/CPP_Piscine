/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:30:57 by fballest          #+#    #+#             */
/*   Updated: 2022/02/24 13:26:33 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class   Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point(void);
		Point(const Point &copy);
		Point(float x, float y);
		Point& operator=(const Point &equal);
		~Point(void);

		Fixed	getX(void) const;
		void	setX(Fixed x);
		Fixed	getY(void) const;
		void	setY(Fixed y);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif