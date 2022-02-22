/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classcontacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:14:20 by fballest          #+#    #+#             */
/*   Updated: 2022/02/22 11:43:48 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classcontacts.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void		Contact::set_name(std::string name)
{
    this->_name = name;
}

std::string	Contact::get_name(void)
{
    return (this->_name);
}

void		Contact::set_lastname(std::string last_name)
{
    this->_last_name = last_name;
}

std::string	Contact::get_lastname(void)
{
    return (this->_last_name);
}

void		Contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}

std::string	Contact::get_nickname(void)
{
    return (this->_nickname);

}

void		Contact::set_phone(std::string phone)
{
    this->_phone = phone;
}

std::string	Contact::get_phone(void)
{
    return (this->_phone);
}

void		Contact::set_dark(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}

std::string	Contact::get_dark(void)
{
    return (this->_darkest_secret);
}