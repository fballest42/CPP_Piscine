/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:27 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 10:17:09 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{

}

HumanA::~HumanA(void)
{

}

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
	&weapon.setWeapon(weapon);
}

std::string		HumanB::getWeapon(void)
{
	return (this->_weapon);
}

void	HumanB::setWeapon(std::string weapon)
{
	this->_weapon = weapon.setType(weapon);
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon << std::endl;
}
