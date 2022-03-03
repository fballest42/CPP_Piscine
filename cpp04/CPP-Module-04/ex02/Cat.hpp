/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:43:01 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/18 21:14:05 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include <sys/types.h>
#include "Brain.hpp"

class	Cat : public AAnimal
{
	private:
		Brain		*_brain;

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &copy);
		virtual	~Cat(void);
		Cat	&operator=(const Cat &op);
		
		virtual AAnimal &operator=(const AAnimal &copy);
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;

		void	setBrain(Brain *brain);
};

#endif