/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classcontacts.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:33:21 by fballest          #+#    #+#             */
/*   Updated: 2022/01/17 11:19:08 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLASSCONTACTS_HPP
# define CLASSCONTACTS_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_darkest_secret;

	public:
		Contact(void);
		~Contact(void);
		
		void		set_name(std::string _name);
		std::string	get_name(void);
		void		set_lastname(std::string _lastname);
		std::string	get_lastname(void);
		void		set_nickname(std::string _nickname);
		std::string	get_nickname(void);
		void		set_phone(std::string _phone);
		std::string	get_phone(void);
		void		set_dark(std::string _darkest_secret);
		std::string	get_dark(void);
};
#endif