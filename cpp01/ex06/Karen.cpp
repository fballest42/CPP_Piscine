/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:59:43 by fballest          #+#    #+#             */
/*   Updated: 2022/01/24 14:26:42 by fballest         ###   ########.fr       */
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

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::exit(void)
{
	std::cout << "GOODBYE." << std::endl;
}

void	Karen::complain(std::string msg)
{
	std::string	msgs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		
	funtion[0] = &Karen::debug;
	funtion[1] = &Karen::info;
	funtion[2] = &Karen::warning;
	funtion[3] = &Karen::error;

	int i = 0;
	while (msgs[i] != msg && i < 4)
		i++;
	while (i <= 4)
	{
		switch (i)
		{
			case 0:
				std::cout << "[ " << msgs[0] << " ]" << std::endl;
				(this->*funtion[i++])();
				break;
			case 1:
				std::cout << "[ " << msgs[1] << " ]" << std::endl;
				(this->*funtion[i++])();
				break;
			case 2:
				std::cout << "[ " << msgs[2] << " ]" << std::endl;
				(this->*funtion[i++])();
				break;
			case 3:
				std::cout << "[ " << msgs[3] << " ]" << std::endl;
				(this->*funtion[i++])();
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				i++;
				break;	
		}
	}
	// int		i = 0;
	// while (i >= 0 && i < 4)
	// {
	// 	if (msgs[i] == msg)
	// 		while (i < 4)
	// 		{
	// 			std::cout << "[ " << msgs[i] << " ]" << std::endl;
	// 			(this->*funtion[i++])();
	// 		}
	// 	i++;
	// }
	// if (i < 0 || i >= 4)
	// 	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
