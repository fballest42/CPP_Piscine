/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:59:43 by fballest          #+#    #+#             */
/*   Updated: 2022/01/24 13:42:35 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "Karen has been constructed." << std::endl;
}

Karen::~Karen()
{
	std::cout << "Karen has been destructed." << std::endl;
}

void	Karen::debug( void )
{

	std::cout << "I love to get extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
			<< "I just love it!."
			<< std::endl;
}

void	Karen::info( void )
{

	std::cout << "I cannot believe adding extra bacon cost more money. " << std::endl
			<< "You don’t put enough! If you did I would not have to ask for it!."
			<< std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl
			<< "I’ve been coming here for years and "
			<< "you just started working here last month." << std::endl;
}

void	Karen::complain(std::string msg)
{
	std::string	msgs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		
	funtion[0] = &Karen::debug;
	funtion[1] = &Karen::info;
	funtion[2] = &Karen::warning;
	funtion[3] = &Karen::error;
	int		i = 0;
	while (i >= 0 && i < 4)
	{
		if (msgs[i] == msg)
			(this->*funtion[i])();
		i++;
	}
}
