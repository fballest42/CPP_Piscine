/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:05:04 by fballest          #+#    #+#             */
/*   Updated: 2022/03/02 11:28:34 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->setDiamondName("DiamondSilly");
	ClapTrap::setName(this->getDiamondName() + "_clap_name");
	this->setHitpoint(FragTrap::getHitpoint());
	this->setEnergy(ScavTrap::getEnergy());
	this->setDamage(FragTrap::getDamage());
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->setDiamondName(name);
	ClapTrap::setName(this->getDiamondName() + "_clap_name");
	this->setHitpoint(FragTrap::getHitpoint());
	this->setEnergy(ScavTrap::getEnergy());
	this->setDamage(FragTrap::getDamage());
	std::cout << "DiamondTrap constructor called. His ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	this->setDiamondName(copy.getName());
	ClapTrap::setName(copy.getDiamondName() + "_clap_name");
	this->setHitpoint(copy.getHitpoint());
	this->setEnergy(copy.getEnergy());
	this->setDamage(copy.getDamage());
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &equal)
{
	std::cout << this->getDiamondName() << " Has his name and values equal to " << equal.getDiamondName()
			<< " values." << std::endl;
	if (this != &equal)
	{
		this->setDiamondName(equal.getDiamondName());
		ClapTrap::setName(equal.getDiamondName() + "_clap_name");
		this->setHitpoint(equal.getHitpoint());
		this->setEnergy(equal.getEnergy());
		this->setDamage(equal.getDamage());
	}
	return (*this);
}

std::string	DiamondTrap::getDiamondName(void) const
{
	return(this->_Name);
}

void		DiamondTrap::setDiamondName(std::string name)
{
	this->_Name = name;
}

void DiamondTrap::attack(std::string const &name)
{
	ScavTrap::attack(name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << this->_Name << " and my ClapTap name is " << ClapTrap::getName() << std::endl;
}
