/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classcontacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:14:20 by fballest          #+#    #+#             */
/*   Updated: 2022/01/17 13:10:30 by fballest         ###   ########.fr       */
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

void		Contact::set_name(std::string _name)
{
    this->_name = _name;
}

std::string	Contact::get_name(void)
{
    return (this->_name);
}

void		Contact::set_lastname(std::string _last_name)
{
    this->_last_name = _last_name;
}

std::string	Contact::get_lastname(void)
{
    return (this->_last_name);
}

void		Contact::set_nickname(std::string _nickname)
{
    this->_nickname = _nickname;
}

std::string	Contact::get_nickname(void)
{
    return (this->_nickname);

}

void		Contact::set_phone(std::string _phone)
{
    this->_nickname = _phone;
}

std::string	Contact::get_phone(void)
{
    return (this->_phone);
}

void		Contact::set_dark(std::string _darkest_secret)
{
    this->_darkest_secret = _darkest_secret;
}

std::string	Contact::get_dark(void)
{
    return (this->_darkest_secret);
}