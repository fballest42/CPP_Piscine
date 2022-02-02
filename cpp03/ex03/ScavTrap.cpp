/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:52 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 15:33:56 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setName("ScavSilly");
	this->setHitpoint(100);
	this->setEnergy(50);
	this->setDamage(20);
	std::cout << this->getName() << " ScavTrap has been constructed with a silly name." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHitpoint(100);
	this->setEnergy(50);
	this->setDamage(20);
	std::cout << this->getName() << " ScavTrap has been constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->setName(copy.getName());
	this->setHitpoint(copy.getHitpoint());
	this->setEnergy(copy.getEnergy());
	this->setDamage(copy.getDamage());
	std::cout << this->getName() << " ScavTrap has been constructed as a copy of " << copy.getName()
			<< " and all his values." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &equal)
{
	std::cout << this->getName() << " Has his name and values equal to " << equal.getName()
			<< " values." << std::endl;
	if (this != &equal)
	{
		this->setName(equal.getName());
		this->setHitpoint(equal.getHitpoint());
		this->setEnergy(equal.getEnergy());
		this->setDamage(equal.getDamage());
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << this->getName() << " ScavTrap attack to " << target << "." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " has entered into the Gate keeper mode.";
}