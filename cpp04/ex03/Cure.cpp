/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:06 by fballest          #+#    #+#             */
/*   Updated: 2022/03/08 11:30:28 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <ostream>

Cure::Cure(void): AMateria("cure")
{
	// std::cout << "Cure default constructor called." << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string type): AMateria(type)
{
	// std::cout << "Cure constructor called and named." << std::endl;
	this->_type = type;
}

Cure::Cure(const Cure &copy): AMateria(copy.getType())
{
	// std::cout << "Cure copy constructor called." << std::endl;
	this->_type = copy.getType();
}

Cure::~Cure(void)
{
	// std::cout << "Cure destructor called." << std::endl;
}

Cure	&Cure::operator=(const Cure &equal)
{
	// std::cout << "Cure equal constructor called." << std::endl;
	if (this == &equal)
		return (*this);
	this->_type = equal.getType();
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "´s wounds *" << std::endl; 
}
