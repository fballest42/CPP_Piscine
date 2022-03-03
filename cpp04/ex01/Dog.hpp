/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:18 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 15:17:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H
# define Dog_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal 
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog(const std::string name);
		Dog& operator=(const Dog &equal);
		~Dog(void);

		void	makeSound(void) const;
};

#endif