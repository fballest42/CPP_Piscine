/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:18 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 12:18:47 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H
# define Dog_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal 
{
	private:
		std::string		_type;

	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog(const std::string name);
		Dog& operator=(const Dog &equal);
		~Dog(void);

		void	makeSound(void) const;
};

#endif