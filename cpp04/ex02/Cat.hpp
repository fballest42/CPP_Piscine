/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:12 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 14:40:59 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal 
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat& operator=(const Cat &equal);
		~Cat(void);

		virtual Animal &operator=(const Animal &copy);
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;
		void	setBrain(Brain *brain);
};

#endif