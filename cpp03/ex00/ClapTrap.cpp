/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:17:56 by fballest          #+#    #+#             */
/*   Updated: 2022/01/28 13:49:40 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

////// CANONICAL CONSTRUCTORS AND DESTRUCTOR //////

ClapTrap::ClapTrap(void): _Name("Silly"), _Hitpoints(10), _Energy_points(10), _Attack_damage(10)
{
	std::cout << this->_Name << " has been constructed with a silly name." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Hitpoints(10), _Energy_points(10), _Attack_damage(10)
{
	this->_Name = name;
	std::cout << this->_Name << " has been constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->_Name = copy.getName();
	this->_Hitpoints = copy.getHitpoint();
	this->_Energy_points = copy.getEnergy();
	this->_Attack_damage = copy.getDamage();
	std::cout << this->_Name << " has been constructed as a copy of " << copy.getName()
			<< " and all his values." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &equal)
{
	this->_Name = equal.getName();
	this->_Hitpoints = equal.getHitpoint();
	this->_Energy_points = equal.getEnergy();
	this->_Attack_damage = equal.getDamage();
	std::cout << this->_Name << " has his name and values equal to " << equal.getName()
			<< " and all his values." << std::endl;
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
	if (this->_Energy_points >= amount)
	{
		this->setEnergy(this->_Energy_points - amount);
		std::cout << this->_Name << " have been attacked and gets a damage of " << this->getDamage()
			<< " now he have only " << this->getEnergy() << " points." << std::endl;
		this->~ClapTrap();
	}
	else
	{
		this->_Energy_points = 10;
		this->_Hitpoints = this->_Hitpoints - 1;
		if (this->_Hitpoints > 0)
			std::cout << this->_Name << " have been attacked and gets a damage of " << this->getDamage()
					<< " he don't have enought energy points and loose a Hitpoint. Only "
					<< this->_Hitpoints << " hitpoints remaining." << std::endl;
		else
		{
			std::cout << this->_Name << " have been attacked and gets a damage of " << this->getDamage()
					<< ". He don't have enought energy points or hitpoints and died." << std::endl;
			this->~ClapTrap();
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{

}
