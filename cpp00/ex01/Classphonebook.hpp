/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classphonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:22:26 by fballest          #+#    #+#             */
/*   Updated: 2022/01/17 12:40:31 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

#include "Classcontacts.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstddef>
#include <ostream>
#include <string>
#include <iomanip>

class Phonebook {
	private:
		Contact _Contacts[8];
		int		_index;

	public:
		Phonebook(void);
		~Phonebook(void);
		void			add_contact(void);
		void			search_contact(void);
		std::string		size_data(std::string data);
};
#endif
