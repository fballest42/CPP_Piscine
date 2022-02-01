/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:52 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 15:43:28 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->ClapTrap::setName("ScavSilly");
	this->ClapTrap::setHitpoint(100);
	this->ClapTrap::setEnergy(50);
	this->ClapTrap::setDamage(20);
	std::cout << ClapTrap::getName() << " ScavTrap has been constructed with a silly name." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->ClapTrap::setName("ScavSilly");
	this->ClapTrap::setHitpoint(100);
	this->ClapTrap::setEnergy(50);
	this->ClapTrap::setDamage(20);
	std::cout << ClapTrap::getName() << " ScavTrap has been constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->ClapTrap::setName(copy.ClapTrap::getName());
	this->ClapTrap::setHitpoint(copy.ClapTrap::getHitpoint());
	this->ClapTrap::setEnergy(copy.ClapTrap::getEnergy());
	this->ClapTrap::setDamage(copy.ClapTrap::getDamage());
	std::cout << this->ClapTrap::getName() << " ScavTrap has been constructed as a copy of " << copy.ClapTrap::getName()
			<< " and all his values." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &equal)
{
	std::cout << this->_Name << " Has his name and values equal to " << equal.getName()
			<< " values." << std::endl;
	if (this = &equal)
		return (*this);
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << this->_Name << " ScavTrap attack to " << target << "." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_Name << " has entered into the Gate keeper mode.";
}