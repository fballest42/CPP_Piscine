/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:15 by fballest          #+#    #+#             */
/*   Updated: 2022/03/07 14:27:23 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Icharacter.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
	this->type = "Ice";
}

Ice::Ice(std::string type): AMateria(type)
{
	std::cout << "Ice constructor called and named." << std::endl;
	this->_type = type;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Ice copy constructor called." << std::endl;
	this->_type = copy.getType();
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called." << std::endl;
}

Ice	&Ice::operator=(const Ice &equal)
{
	std::cout << "Ice equal constructor called." << std::endl;
	if (this == &equal)
		return (*this);
	this->_type = equal.getType();
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	use(ICharacter &target)
{
	std:cout << "* shoots an ice ball at " << target.getName() << " *" << std::endl; 
}