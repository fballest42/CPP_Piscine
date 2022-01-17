/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classphonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:26:59 by fballest          #+#    #+#             */
/*   Updated: 2022/01/17 14:26:07 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classphonebook.hpp"

Phonebook::Phonebook(): _index(0)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void		Phonebook::add_contact(void)
{
	std::string		data;

	std::cout << "ADD NEW NAME CONTACT: ";
	std::getline (std::cin, data);
	this->_Contacts[this->_index % 8].set_name(data);

	std::cout << "ADD NEW LASTNAME CONTACT: ";
	std::getline (std::cin, data);
	this->_Contacts[this->_index % 8].set_lastname(data);

	std::cout << "ADD NEW NICKNAME CONTACT: ";
	std::getline (std::cin, data);
	this->_Contacts[this->_index % 8].set_nickname(data);

	std::cout << "ADD NEW PHONE CONTACT: ";
	std::getline (std::cin, data);
	this->_Contacts[this->_index % 8].set_phone(data);

	std::cout << "ADD NEW DARKEST SECRET CONTACT: ";
	std::getline (std::cin, data);
	this->_Contacts[this->_index % 8].set_dark(data);
	this->_index++;
	std::cout << "***************** NEW CONTACT ADDED *****************" << std::endl;
}

std::string		Phonebook::size_data(std::string data)
{
	int	i;

	i = 0;
	std::string	space;
	if (data.length() > 10)
		data = data.substr(0, 9) + ".";
	else if (data.length() < 10)
	{
		while (i < (10 - data.length()))
		{
			space = space + " ";
			i++;
		}
		data = space + data;
	}
	return (data);
}

void	Phonebook::search_contact(void)
{
	std::string		data;
	int				i = 0;
	std::cout << "* HERE IS YOUR CURRENT PHONEBOOK'S CONTACTS *" << std::endl;
	std::cout << "=============================================" << std::endl;
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	std::cout << "=============================================" << std::endl;
	while (i < this->_index)
	{
		std::cout << "|" << "         " << i << "|";
		data = this->_Contacts[i].get_name();
		data = size_data(data);
		std::cout << data << "|";
		data = this->_Contacts[i].get_lastname();
		data = size_data(data);
		std::cout << data << "|";
		data = this->_Contacts[i].get_nickname();
		data = size_data(data);
		std::cout << data << "|";
		std::cout << std::endl << "=============================================" << std::endl;
		i++;
	}
	std::cout << "Which index contact do you wnat to see? : ";
	std::cin >> i;
	std::cin.ignore(255, '\n');
	if (i < this->_index && i >= 0 && i < 8)
	{
		std::cout << "******** HERE IS YOUR CONTACT INFORMATION ********" << std::endl;
		std::cout << "FIRST NAME: " << this->_Contacts[i].get_name() << std::endl;
		std::cout << "LAST NAME: " << this->_Contacts[i].get_lastname() << std::endl;
		std::cout << "NICKNAME: " << this->_Contacts[i].get_nickname() << std::endl;
		std::cout << "PHONE: " << this->_Contacts[i].get_phone() << std::endl;
		std::cout << "DRAKEST SECRET: " << this->_Contacts[i].get_dark() << std::endl;
	}
	else
		std::cout << "**** INDEX NUMBER DON'T EXIT IN THE PHONEBOOK ****" << std::endl;
}
