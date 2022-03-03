/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:31:05 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 18:56:30 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

AMateria::AMateria(std::string const &type) : _type(type)
{
	//std::cout << "AMateria constructor called" << std::endl;	
}

AMateria::~AMateria(void)
{
	//std::cout << "AMateria destructor called" << std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Using unknown materia to fight against " << target.getName() << std::endl;
}
