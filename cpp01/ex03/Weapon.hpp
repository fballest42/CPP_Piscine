/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:42 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 09:44:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
		std::string		_type;

	public:
		Weapon(void);
		~Weapon(void);
		std::string	getType(void);
		void		setType(std::string type);
};

#endif