/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:36:51 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/18 21:17:45 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
	private:
		Brain		*_brain;

	public:
		Dog(void);
		Dog(const Dog &copy);
		virtual	~Dog(void);
		Dog	&operator=(const Dog &op);

		virtual AAnimal &operator=(const AAnimal &copy);
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;

		void	setBrain(Brain *brain);
};

#endif