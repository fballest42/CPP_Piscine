/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:39:06 by fballest          #+#    #+#             */
/*   Updated: 2022/02/24 13:58:00 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	a(0.0, 0.0);
	Point	b(0.0, 10.0);
	Point	c(10.0, 0.0);

	Point	poi(10.0, 0);
	if (bsp(a, b, c, poi))
		std::cout << poi.getX() << ", " << poi.getY() << " --> is outside ABC triangle" << std::endl;
	else
		std::cout << poi.getX() << ", " << poi.getY() << " --> is inside ABC triangle" << std::endl;

	Point	poi2(11, 0);	
	if (bsp(a, b, c, poi2))
		std::cout << poi2.getX() << ", " << poi2.getY() << " --> is outside ABC triangle" << std::endl;
	else
		std::cout << poi2.getX() << ", " << poi2.getY() << " --> is inside ABC triangle" << std::endl;

	Point	poi3(2, 0);	
	if (bsp(a, b, c, poi3))
		std::cout << poi3.getX() << ", " << poi3.getY() << " --> is outside ABC triangle" << std::endl;
	else
		std::cout << poi3.getX() << ", " << poi3.getY() << " --> is inside ABC triangle" << std::endl;

	Point	poi4(2, 2);	
	if (bsp(a, b, c, poi4))
		std::cout << poi4.getX() << ", " << poi4.getY() << " --> is outside ABC triangle" << std::endl;
	else
		std::cout << poi4.getX() << ", " << poi4.getY() << " --> is inside ABC triangle" << std::endl;

	Point	poi5(0, 10);	
	if (bsp(a, b, c, poi5))
		std::cout << poi5.getX() << ", " << poi5.getY() << " --> is outside ABC triangle" << std::endl;
	else
		std::cout << poi5.getX() << ", " << poi5.getY() << " --> is inside ABC triangle" << std::endl;

	Point	poi6(0, 11);	
	if (bsp(a, b, c, poi6))
		std::cout << poi6.getX() << ", " << poi6.getY() << " --> is outside ABC triangle" << std::endl;
	else
		std::cout << poi6.getX() << ", " << poi6.getY() << " --> is inside ABC triangle" << std::endl;

	Point	poi7(7, 6);	
	if (bsp(a, b, c, poi7))
		std::cout << poi7.getX() << ", " << poi7.getY() << " --> is outside ABC triangle" << std::endl;
	else
		std::cout << poi7.getX() << ", " << poi7.getY() << " --> is inside ABC triangle" << std::endl;
	return 0;
}
