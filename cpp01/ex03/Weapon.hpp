/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:42 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 11:20:10 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
		std::string		_type;

	public:
		Weapon(std::string weapon);
		~Weapon(void);
		std::string	getType(void);
		void		setType(std::string type);
};

#endif