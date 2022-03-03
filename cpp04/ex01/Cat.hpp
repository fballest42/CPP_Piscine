/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:12 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 15:18:02 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal 
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat(const std::string name);
		Cat& operator=(const Cat &equal);
		~Cat(void);

		void	makeSound(void) const;
};

#endif