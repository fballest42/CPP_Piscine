/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:06 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 14:23:28 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>
#include <sys/types.h>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string		_type;

	public:
		virtual ~Animal(void);
		virtual Animal &operator=(const Animal &equal) const = 0;

		void			setType(std::string type);
		std::string 	getType(void) const;
		virtual void	makeSound(void) const = 0;
		virtual Brain	*getBrain(void) const = 0;
};

#endif