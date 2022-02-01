/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:52 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 12:34:08 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FrapTrap.hpp"

FrapTrap::FrapTrap(void): _Name("Frap_Silly"), _Hitpoints(100), _Energy_points(100), _Attack_damage(30)
{
	this->ClapTrap::setName(_Name);
	this->ClapTrap::setHitpoint(_Hitpoints);
	this->ClapTrap::setEnergy(_Energy_points);
	this->ClapTrap::setDamage(_Attack_damage);
	std::cout << this->_Name << " FrapTrap has been constructed with a silly name." << std::endl;
}

FrapTrap::FrapTrap(std::string name): _Hitpoints(100), _Energy_points(100), _Attack_damage(30)
{
	this->_Name = name;
	this->ClapTrap::setName(name);
	this->ClapTrap::setHitpoint(_Hitpoints);
	this->ClapTrap::setEnergy(_Energy_points);
	this->ClapTrap::setDamage(_Attack_damage);
	std::cout << this->_Name << " FrapTrap has been constructed." << std::endl;
}

FrapTrap::FrapTrap(const FrapTrap &copy)
{
	this->_Name = copy.ClapTrap::getName();
	this->_Hitpoints = copy.ClapTrap::getHitpoint();
	this->_Energy_points = copy.ClapTrap::getEnergy();
	this->_Attack_damage = copy.ClapTrap::getDamage();
	this->setName(_Name);
	this->setHitpoint(_Hitpoints);
	this->setEnergy(_Energy_points);
	this->setDamage(_Attack_damage);
	std::cout << this->_Name << "FrapTrap has been constructed as a copy of " << copy.ClapTrap::getName()
			<< " and all his values." << std::endl;
}

FrapTrap &FrapTrap::operator=(const FrapTrap &equal)
{
	this->_Name = equal.ClapTrap::getName();
	this->_Hitpoints = equal.ClapTrap::getHitpoint();
	this->_Energy_points = equal.ClapTrap::getEnergy();
	this->_Attack_damage = equal.ClapTrap::getDamage();
	std::cout << this->_Name << " Has his name and values equal to " << equal.getName()
			<< " values." << std::endl;
	return (*this);
}

FrapTrap::~FrapTrap(void)
{
	std::cout << "FrapTrap Destructor called." << std::endl;
}

void FrapTrap::highFivesGuys(void)
{
	std::cout << this->_Name << " FrapTrap say Give me five. " << std::endl;
}
