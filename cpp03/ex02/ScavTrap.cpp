/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:52 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 12:34:11 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void): _Name("Scav_Silly"), _Hitpoints(100), _Energy_points(50), _Attack_damage(20)
{
	this->ClapTrap::setName(_Name);
	this->ClapTrap::setHitpoint(_Hitpoints);
	this->ClapTrap::setEnergy(_Energy_points);
	this->ClapTrap::setDamage(_Attack_damage);
	std::cout << this->_Name << " ScavTrap has been constructed with a silly name." << std::endl;
}

ScavTrap::ScavTrap(std::string name): _Hitpoints(100), _Energy_points(50), _Attack_damage(20)
{
	this->_Name = name;
	this->ClapTrap::setName(name);
	this->ClapTrap::setHitpoint(_Hitpoints);
	this->ClapTrap::setEnergy(_Energy_points);
	this->ClapTrap::setDamage(_Attack_damage);
	std::cout << this->_Name << " ScavTrap has been constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->_Name = copy.ClapTrap::getName();
	this->_Hitpoints = copy.ClapTrap::getHitpoint();
	this->_Energy_points = copy.ClapTrap::getEnergy();
	this->_Attack_damage = copy.ClapTrap::getDamage();
	this->setName(_Name);
	this->setHitpoint(_Hitpoints);
	this->setEnergy(_Energy_points);
	this->setDamage(_Attack_damage);
	std::cout << this->_Name << " ScavTrap has been constructed as a copy of " << copy.ClapTrap::getName()
			<< " and all his values." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &equal)
{
	this->_Name = equal.ClapTrap::getName();
	this->_Hitpoints = equal.ClapTrap::getHitpoint();
	this->_Energy_points = equal.ClapTrap::getEnergy();
	this->_Attack_damage = equal.ClapTrap::getDamage();
	std::cout << this->_Name << " Has his name and values equal to " << equal.getName()
			<< " values." << std::endl;
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