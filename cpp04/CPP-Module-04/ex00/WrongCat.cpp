/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:39:44 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/14 21:38:56 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(copy.getType());
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &op)
{
	std::cout << "Assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	return *this;
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Pio pio ... I love you." << std::endl;
}