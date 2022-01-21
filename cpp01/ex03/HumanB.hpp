/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:39 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 09:58:32 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>

class HumanB {
		Weapon		_weapon;
		std::string _name;

	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);
		std::string	getWeapon(void);
		void		setWeapon(std::string weapon);
		void		attack(void);
};

#endif
