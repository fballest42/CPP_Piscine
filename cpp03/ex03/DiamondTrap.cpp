/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:05:04 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 15:31:17 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

// Name (Parameter of constructor)
// Claptrap::Name (Parameter of constructor + "_clap_name")
// Hitpoints (Fragtrap)
// Energy points (Scavtrap)
// Attack damage (Fragtrap)
// attack (Scavtrap)

DiamondTrap::DiamondTrap(void): _Name("DiamondTrapSilly")
{
	this->ClapTrap::_Name = (_Name + "_clap_trap");
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->_Name = name;
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << this->_Name << " DiamondTrap constructor called. His ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &equal)
{
	std::cout << this->_Name << " Has his name and values equal to " << equal.getName()
		<< " values." << std::endl;
}

void DiamondTrap::whoAmI(void)
{

}
