/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:27 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 11:34:00 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void)
{
	std::cout << this->_name << " was destryed." << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
	std::cout << this->_name << " was created." << std::endl;
}


void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his weapon: " << this->_weapon.getType() << std::endl;
}
