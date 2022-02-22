/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:01:42 by fballest          #+#    #+#             */
/*   Updated: 2022/02/22 11:52:08 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classphonebook.hpp"

int     main()
{
	Phonebook		nokia;
	std::string		command;
	
	std::cout << "What do you want to do ADD, SEARCH or EXIT: ";
	while (std::getline(std::cin, command))
	{
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			nokia.add_contact();
		else if (command == "SEARCH")
			nokia.search_contact();
		std::cout << "What do you want to do ADD, SEARCH or EXIT: ";
		continue ;
	}
	return (0);
}