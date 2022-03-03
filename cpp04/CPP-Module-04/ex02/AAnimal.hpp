/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:55:30 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/18 21:07:55 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class	AAnimal
{
	protected:
		std::string	_type;

	public:
		virtual ~AAnimal(void);
		virtual AAnimal &operator=(const AAnimal &copy) = 0;

		std::string			getType(void) const;
		void				setType(std::string type);

		virtual void		makeSound(void) const = 0;
		virtual Brain		*getBrain(void) const = 0;

};

#endif