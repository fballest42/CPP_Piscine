/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:53:00 by fballest          #+#    #+#             */
/*   Updated: 2022/03/08 11:29:44 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	// std::cout << "Amateria constructor Called." << std::endl;
}

AMateria::~AMateria(void)
{
	// std::cout << "Destructor Amateria called." << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "You are using the AMateria against " << target.getName() << "." << std::endl;
}