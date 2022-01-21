/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:32 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 09:57:58 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
		Weapon		_weapon;
		std::string _name;
		
	public:
		HumanA(void);
		HumanA(std::string name);
		~HumanA(void);
		std::string	getWeapon(void);
		void		setWeapon(std::string weapon);
		void		attack(void);	
};

#endif