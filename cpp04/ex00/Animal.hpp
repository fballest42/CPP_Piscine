/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:06 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 12:18:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string		_type;

	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal(const std::string name);
		Animal& operator=(const Animal &equal);
		virtual ~Animal(void);
		
		void			setType(std::string type);
		std::string 	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif