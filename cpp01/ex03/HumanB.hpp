/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:39 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 11:24:17 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
		Weapon		*_weapon;
		std::string _name;

	public:
		HumanB(std::string name);
		~HumanB(void);
		std::string	getWeapon(void);
		void		setWeapon(Weapon weapon);
		void		attack(void);
};

#endif
