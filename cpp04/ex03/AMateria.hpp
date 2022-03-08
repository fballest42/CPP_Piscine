/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:53:06 by fballest          #+#    #+#             */
/*   Updated: 2022/03/08 11:00:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include <sys/types.h>
#include "ICharacter.hpp"

class   AMateria
{
	protected:
		std::string		_type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
