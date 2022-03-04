/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:18 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 14:38:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H
# define Dog_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal 
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog& operator=(const Dog &equal);
		virtual ~Dog(void);

		virtual Animal &operator=(const Animal &copy);
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;

		void	setBrain(Brain *brain);
};

#endif