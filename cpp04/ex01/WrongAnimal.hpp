/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:24:47 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 13:25:34 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string		_type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(const std::string name);
		WrongAnimal& operator=(const WrongAnimal &equal);
		virtual ~WrongAnimal(void);

		std::string	getType(void) const;
		void		setType(std::string type);
		virtual void		makeSound(void) const;
};

#endif