/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:34 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 10:09:49 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanA::HumanB(void)
{
}

HumanA::~HumanB(void)
{
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

std::string		HumanB::getWeapon(void)
{
	return (this->_weapon);
}

void	HumanB::setWeapon(std::string weapon)
{
	this->_weapon = weapon.setType(weapon);
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon << std::endl;
}
