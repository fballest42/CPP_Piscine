/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:24:23 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 19:21:08 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	a(0, 0);
	Point	b(0, 10);
	Point	c(10, 0);
	Point	in(2, 2);
	Point	out(8, 8);

	std::cout << "Is (IN) inside ABC triangle? " << bsp(a, b, c, in) << std::endl;
	std::cout << "Is (OUT) inside ABC triangle? " << bsp(a, b, c, out) << std::endl;
	return 0;
}
