/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:59:36 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 19:29:21 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <ostream>

Ice::Ice(void) : AMateria("ice")
{
	//std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(std::string type) : AMateria(type)
{
	//std::cout << "Ice constructor called" << std::endl;
	this->_type = type;
}

Ice::Ice(const Ice &copy) : AMateria(copy.getType())
{
	//std::cout << "Ice copy constructor called" << std::endl;
	this->_type = copy.getType();
}

Ice::~Ice(void)
{
	//std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &op)
{
	if (this == &op)
		return *this;
	this->_type = op.getType();
	return *this;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
