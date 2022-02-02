/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:05:04 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 14:00:19 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->setName("DiamondSilly");
	ClapTrap::setName(this->getName() + "_clap_name");
	this->setHitpoint(FragTrap::getHitpoint());
	this->setEnergy(ScavTrap::getEnergy());
	this->setDamage(FragTrap::getDamage());
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->setName(name);
	ClapTrap::setName(this->getName() + "_clap_name");
	this->setHitpoint(FragTrap::getHitpoint());
	this->setEnergy(ScavTrap::getEnergy());
	this->setDamage(FragTrap::getDamage());
	std::cout << this->_Name << " DiamondTrap constructor called. His ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	this->setName(copy.getName());
	ClapTrap::setName(copy.getName() + "_clap_name");
	this->setHitpoint(copy.getHitpoint());
	this->setEnergy(copy.getEnergy());
	this->setDamage(copy.getDamage());
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &equal)
{
	std::cout << this->getName() << " Has his name and values equal to " << equal.getName()
			<< " values." << std::endl;
	if (this != &equal)
	{
		this->setName(equal.getName());
		ClapTrap::setName(equal.getName() + "_clap_name");
		this->setHitpoint(equal.getHitpoint());
		this->setEnergy(equal.getEnergy());
		this->setDamage(equal.getDamage());
	}
	return (*this);
	return (*this);
}

void	DiamondTrap::attack(std::string &name)
{
	ScavTrap::attack(name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << this->_Name << " and my ClapTap name is " << ClapTrap::getName() << std::endl;
}
