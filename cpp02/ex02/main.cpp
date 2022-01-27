/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:39:06 by fballest          #+#    #+#             */
/*   Updated: 2022/01/26 12:21:05 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	// if (a != b)
	// 	std::cout << "SOMOS DISTINTOS" << std::endl;
	// if (a == b)
	// 	std::cout << "SOMOS IGUALES" << std::endl;
	// if (a < b)
	// 	std::cout << "A ES MENOR QUE B" << std::endl;
	// if (a <= b)
	// 	std::cout << "A ES MENOR O IGUAL QUE B" << std::endl;
	// if (a > b)
	// 	std::cout << "A ES MAYOR QUE B" << std::endl;
	// if (a >= b)
	// 	std::cout << "A ES MAYOR O IGUAL QUE B" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
