/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:52 by fballest          #+#    #+#             */
/*   Updated: 2022/01/31 14:47:19 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void): _Name("ScavSilly"), _Hitpoints(100), _Energy_points(50), _Attack_damage(20)
{
	this->ClapTrap::setName(_Name);
	this->ClapTrap::setHitpoint(_Hitpoints);
	this->ClapTrap::setEnergy(_Energy_points);
	this->ClapTrap::setDamage(_Attack_damage);
	std::cout << this->_Name << " ScavTrap has been constructed with a silly name." << std::endl;
}

ScavTrap::ScavTrap(std::string name): _Hitpoints(100), _Energy_points(50), _Attack_damage(20)
{
	this->ClapTrap::setName(_Name);
	this->ClapTrap::setHitpoint(_Hitpoints);
	this->ClapTrap::setEnergy(_Energy_points);
	this->ClapTrap::setDamage(_Attack_damage);
	std::cout << this->_Name << " ScavTrap has been constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->_Name = copy.getName();
	this->_Hitpoints = copy.getHitpoint();
	this->_Energy_points = copy.getEnergy();
	this->_Attack_damage = copy.getDamage();
	std::cout << this->_Name << " ScavTrap has been constructed as a copy of " << copy.getName()
			<< " and all his values." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &equal)
{
	this->_Hitpoints = equal.getHitpoint();
	this->_Energy_points = equal.getEnergy();
	this->_Attack_damage = equal.getDamage();
	std::cout << this->_Name << " has his values equal to " << equal.getName()
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