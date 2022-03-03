/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:46:27 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 19:00:58 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <ostream>

Cure::Cure(void) : AMateria("cure")
{
	//std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string type) : AMateria(type)
{
	//std::cout << "Cure constructor called" << std::endl;
	this->_type = type;
}

Cure::Cure(const Cure &copy) : AMateria(copy.getType())
{
	//std::cout << "Cure copy constructor called" << std::endl;
	this->_type = copy.getType();
}

Cure::~Cure(void)
{
	//std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &op)
{
	if (this == &op)
		return *this;
	this->_type = op.getType();
	return *this;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
