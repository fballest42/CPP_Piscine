/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:38:52 by fballest          #+#    #+#             */
/*   Updated: 2022/03/01 13:04:39 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("FragSilly")
{
	this->setName("FragSilly");
	this->setHitpoint(100);
	this->setEnergy(100);
	this->setDamage(30);
	std::cout << this->getName() << " FragTrap has been constructed with a silly name." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->setName(name);
	this->setHitpoint(100);
	this->setEnergy(100);
	this->setDamage(30);
	std::cout << this->getName() << " FragTrap has been constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << this->getName() << " FragTrap is going to be constructed as a copy of " << copy.getName()
			<< " and all his values." << std::endl;
	this->setName(copy.getName());
	this->setHitpoint(copy.getHitpoint());
	this->setEnergy(copy.getEnergy());
	this->setDamage(copy.getDamage());

}

FragTrap &FragTrap::operator=(const FragTrap &equal)
{

	if (this != &equal)
	{
		this->setName(equal.getName());
		this->setHitpoint(equal.getHitpoint());
		this->setEnergy(equal.getEnergy());
		this->setDamage(equal.getDamage());
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " FragTrap say Give me five. " << std::endl;
}
