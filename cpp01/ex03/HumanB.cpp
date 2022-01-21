/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:34 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 11:51:19 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(void)
{
	std::cout << this->_name << " was destroyed." << std::endl;
}

HumanB::HumanB(std::string name): _weapon(NULL) , _name(name)
{
	this->_name = name;
	std::cout << this->_name << " was created." << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
	std::cout << this->_name << " has taken a weapon and now is armed." << std::endl;
}

void	HumanB::attack(void)
{
	if (!this->_weapon)
		std::cout << this->_name << " was unarmed, maybe he can escape." << std::endl;
	else
		std::cout << this->_name << " attacks." << std::endl;
}
