/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:58:59 by fballest          #+#    #+#             */
/*   Updated: 2022/01/24 15:07:31 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed(void)
{
	std::cout << "Fixed has been contructed." << std::endl;
}

Fixed(Fixed const &)
{
	std::cout << "Copy contructor has finished successfully." << std::endl;
}

Fixed& operator=(Fixed const &)
{
	std::cout << "Operator contructor has finished successfully." << std::endl;
}

~Fixed(void)
{
	std::cout << "Fixed has been destroyed." << std::endl;
}