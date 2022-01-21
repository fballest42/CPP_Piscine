/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:45 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 11:51:17 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon(void)
{
	std::cout << this->_type << " was destroyed and unavailable." << std::endl;
}

Weapon::Weapon(std::string weapon)
{
	this->_type = weapon;
	std::cout << this->_type << " was created and available." << std::endl;
}

std::string	Weapon::getType(void)
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << "The weapon: '" << this->_type << "' is now available." << std::endl;
}