/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:01:42 by fballest          #+#    #+#             */
/*   Updated: 2022/01/17 14:29:23 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classphonebook.hpp"

int     main()
{
	Phonebook		nokia;
	std::string		command;
	
	while ((std::cout << "What do you want to do ADD, SEARCH or EXIT: " && std::getline(std::cin, command)))
	{
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			nokia.add_contact();
		else if (command == "SEARCH")
			nokia.search_contact();
	}
	return (0);
}