/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:03:15 by fballest          #+#    #+#             */
/*   Updated: 2022/03/07 14:53:26 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name(""), _equiped(0)
{
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(std::string name): _name(name), _equiped(0)
{
	std::cout << "Character constructor called and named." << std::endl; 
}

Character::Character(const Character &copy)
{
	std::cout << "Character copy constructor called." << std::endl;
	this->_name = copy.getName();
	this->_equiped = copy->_equiped;
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = copy._inventory[i];
		i++;
	}
}

Character::~Character(void)
{
	std::cout << "Character destructor called." << std::endl;
	int i = 0;
	while (i < 4)
		delete this->_inventory[i++];
}

Character &Character::operator=(const Character &equal)
{
	if (this == &equal)
		return (*this);
	this->_name = equal.getNamme();
	this->_equiped = equal._equiped;
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = equal._inventory[i]
		i++;
	}
	return (*this);
}

std::string		&Character::getName(void) const
{
	return (this->_name);
}

void			Character::equip(AMateria *m)
{
	if (this->_equiped < 4)
		this->_inventory[_equiped] = m;
	else
		std::cout << "Could not equiped it." << std::endl;
	if (this->equiped < 3)
		this->_equiped++;
	else
		this->_equiped = 0;
}

void			unequip(int idx)
{
	if (idx < 4 && idx >= 0 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
	else
		std::cout << "Could not unequiped it, out of range or inventory not assigned in this position." << std::endl;
}

void			use(int indx, ICharacter &target)
{
	if (idx < 4 && idx >= 0 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Coud not use it, out of range or inventory not assigned in this position." << std::endl;
}
