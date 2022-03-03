/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:14:50 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 19:31:12 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <stdio.h>

Character::Character(void) : _name(""), _equipedMateria(0)
{
	//std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name), _equipedMateria(0)
{
	//std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &copy)
{
	//std::cout << "Character copy constructor called" << std::endl;
	this->_name = copy.getName();
	for (int i = 0; i < _equipedMateria; i++)
		this->_inventory[i] = copy._inventory[i];
	this->_equipedMateria = copy._equipedMateria;
}

Character::~Character(void)
{
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < this->_equipedMateria; i++)
		delete this->_inventory[i];
}

Character	&Character::operator=(const Character &op)
{
	if (this == &op)
		return *this;
	this->_name = op.getName();
	for (int i = 0; i < _equipedMateria; i++)
		this->_inventory[i] = op._inventory[i];
	this->_equipedMateria = op._equipedMateria;
	return *this;
}


std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (this->_equipedMateria < 4)
		this->_inventory[_equipedMateria] = m;
	else
		std::cout << "Nothing else can be equiped" << std::endl;
	this->_equipedMateria++;
}

void Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
}
