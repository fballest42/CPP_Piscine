/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:38:23 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/13 19:57:24 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point(void);
		Point(float x, float y);
		Point(const Point &copy);
		~Point();
		Point &operator=(const Point &op);

		Fixed	getX(void) const;
		void	setX(Fixed x);
		Fixed	getY(void) const;
		void	setY(Fixed y);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
#endif