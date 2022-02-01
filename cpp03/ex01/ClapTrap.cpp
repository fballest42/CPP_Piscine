/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:17:56 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 11:26:27 by fballest         ###   ########.fr       */
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

ClapTrap &ClapTrap::operator=(const ClapTrap &equal)
{
	this->_Hitpoints = equal.getHitpoint();
	this->_Energy_points = equal.getEnergy();
	this->_Attack_damage = equal.getDamage();
	std::cout << this->_Name << " has his values equal to " << equal.getName()
			<< " values." << std::endl;
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
	if (this->_Hitpoints <= 0 && this->_Energy_points <= 0)
		std::cout << this->_Name << " has died long time ago. " 
		<< "Please choose another ClapTrap attacker." << std::endl;
	std::cout << "ClapTrap " << this->_Name << " attack " << target << ", causing "
	 		<< this->_Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	Ini_Ene;
	unsigned int	Ini_Hit;
	if (this->getHitpoint() == 10 && this->getEnergy() == 10)
	{
		Ini_Hit = 10;
		Ini_Ene = 10;
	}
	else if (this->getHitpoint() == 100 && this->getEnergy() == 50)
	{
		Ini_Hit = 100;
		Ini_Ene = 50;
	}
	if (this->_Hitpoints <= 0 && this->_Energy_points <= 0)
		std::cout << this->_Name << " has died long time ago. " 
		<< "Please choose another ClapTrap to damage." << std::endl;
	else if (this->_Hitpoints >= amount)
	{
		this->setDamage(amount);
		this->setHitpoint(this->_Hitpoints - this->_Attack_damage);
		if (this->getHitpoint() == 0)
		{
			this->setHitpoint(Ini_Hit);
			this->setEnergy(this->_Energy_points - 1);
		}
		std::cout << this->_Name << " had received an attack of: " << this->_Attack_damage
				<< " points. Now he have " << this->_Hitpoints << " Hitpoints and " << this->_Energy_points
				<< " points." << std::endl;
	}
	else
	{
		if ((this->_Hitpoints + (this->_Energy_points * 10)) <= amount)
		{
			this->setDamage(amount);
			std::cout << this->_Name << " has received a letal attack of: " << this->_Attack_damage
				<< " points and died because he has only " << this->_Hitpoints << " points." << std::endl;
			this->setEnergy(0);
			this->setHitpoint(0);
		}
		else if ((this->_Hitpoints + (this->_Energy_points * 10)) > amount)
		{
			this->setDamage(amount);
			this->setHitpoint(((this->_Hitpoints + (this->_Energy_points * Ini_Hit)) - amount) % Ini_Hit);
			this->setEnergy(((this->_Hitpoints + (this->_Energy_points * Ini_Hit)) - amount) / Ini_Hit);
			std::cout << this->_Name << " has received an attack of: " << this->_Attack_damage
				<< " points. He had now " << this->_Hitpoints << " Hitpoints and " << this->_Energy_points
				<< " Energy points." << std::endl;
		}
	}
	this->setDamage(0);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	Ini_Ene;
	unsigned int	Ini_Hit;
	if (this->getHitpoint() == 10 && this->getEnergy() == 10)
	{
		Ini_Hit = 10;
		Ini_Ene = 10;
	}
	else if (this->getHitpoint() == 100 && this->getEnergy() == 50)
	{
		Ini_Hit = 100;
		Ini_Ene = 50;
	}
	if (this->_Hitpoints <= 0 && this->_Energy_points <= 0)
	{
		if (floor(amount / Ini_Ene) > 0)
			this->setEnergy(floor(amount / Ini_Ene));
		this->setHitpoint((amount) % Ini_Ene);
		if (this->_Hitpoints == 0)
		{
			this->setHitpoint(Ini_Ene);
			this->setEnergy(this->_Energy_points - 1);
		}
		std::cout << this->_Name << " has died long time ago. " 
		<< "Please choose another ClapTrap to damage." << std::endl;
	}
	else if ((this->_Hitpoints + amount) <= Ini_Hit)
		this->setHitpoint(this->_Hitpoints + amount);
	else
	{
		this->setEnergy(((this->_Hitpoints + (this->_Energy_points * Ini_Hit)) + amount) / Ini_Hit);
		this->setHitpoint(((this->_Hitpoints + (this->_Energy_points * Ini_Hit)) + amount) % Ini_Hit);
	}
	std::cout << this->_Name << " has received a reparation of: " << amount
		<< " and now he has: " << this->_Hitpoints << " Hitpoints and " << this->_Energy_points << " Energy points."
		<< std::endl;
}
