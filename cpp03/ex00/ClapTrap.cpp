/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:17:56 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 10:49:44 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

////// CANONICAL CONSTRUCTORS AND DESTRUCTOR //////

ClapTrap::ClapTrap(void): _Name("Silly"), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << this->_Name << " has been constructed with a silly name." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	this->setName(name);
	std::cout << this->_Name << " has been constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->setName(copy.getName());
	this->setHitpoint(copy.getHitpoint());
	this->setEnergy(copy.getEnergy());
	this->setDamage(copy.getDamage());
	std::cout << this->getName() << " has been constructed as a copy of " << copy.getName()
			<< " and all his values." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &equal)
{
	std::cout << this->getName() << " Has his name and values equal to " << equal.getName()
			<< " values." << std::endl;
	if (this == &equal)
		return (*this);
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called." << std::endl;
}

////// GETTERS AND SETTERS //////

void ClapTrap::setName(std::string const name)
{
	this->_Name = name;
}

std::string ClapTrap::getName(void) const
{
	return (this->_Name);
}

void ClapTrap::setHitpoint(unsigned int const hitpoints)
{
	this->_Hitpoints = hitpoints;
}

unsigned int ClapTrap::getHitpoint(void) const
{
	return (this->_Hitpoints);
}

void ClapTrap::setEnergy(unsigned int const energy)
{
	this->_Energy_points = energy;
}

unsigned int ClapTrap::getEnergy(void) const
{
	return (this->_Energy_points);
}

void ClapTrap::setDamage(unsigned int const damage)
{
	this->_Attack_damage = damage;
}
unsigned int ClapTrap::getDamage(void) const
{
	return (this->_Attack_damage);
}

////// MEMBER FUNTIONS //////

void ClapTrap::attack(std::string const &target)
{	
	std::cout << "ClapTrap " << this->_Name << " attack " << target << ", causing "
	 		<< this->_Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->setHitpoint(this->getHitpoint() - 1);
	if (this->getEnergy() > amount)
	{
		this->setEnergy(this->getEnergy() - amount);
		std::cout << this->getName() << " received an attack of " << amount << " points, now he had "
				<< this->getEnergy() << " Energy points. And he has got " << this->getHitpoint()
				<< " Hit Points remaining." << std::endl;
	}
	else if (this->getEnergy() <= amount )
	{
		this->setEnergy(0);
		this->setHitpoint(0);
		std::cout << this->getName() << " is destroyed." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->setEnergy(this->getEnergy() + amount);
	std::cout << this->getName() << " have received a reparation of " << amount << " points, and now he had "
			<< this->getEnergy() << " Energy points." << std::endl;
}
