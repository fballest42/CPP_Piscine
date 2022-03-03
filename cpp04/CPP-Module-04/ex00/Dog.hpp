/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:36:51 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 19:55:47 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class	Dog : public Animal
{
	private:
		std::string	_type;

	public:
		Dog(void);
		Dog(const Dog &copy);
		virtual	~Dog(void);
		Dog	&operator=(const Dog &op);

		
		void	makeSound() const;
};

#endif