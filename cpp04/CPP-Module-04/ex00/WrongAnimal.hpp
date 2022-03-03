/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:38:19 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 20:39:11 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	private:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal(void);
		WrongAnimal &operator=(const WrongAnimal &copy);

		std::string	getType(void) const;
		void		setType(std::string type);

		void		makeSound(void) const;
		
};

#endif