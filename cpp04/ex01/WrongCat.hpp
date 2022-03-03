/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:24:47 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 13:21:00 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
		std::string		_type;

	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		WrongCat(const std::string name);
		WrongCat& operator=(const WrongCat &equal);
		~WrongCat(void);

		void		makeSound(void) const;
};

#endif