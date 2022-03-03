/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:42:51 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 21:34:45 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <sys/types.h>

class	WrongCat : public WrongAnimal
{
	private:
		std::string	_type;

	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &copy);
		virtual	~WrongCat(void);
		WrongCat	&operator=(const WrongCat &op);

		void	makeSound(void) const;
};

#endif