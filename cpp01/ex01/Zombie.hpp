/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:12:58 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 14:18:30 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <array>

class Zombie {
		std::string		_name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void			setName(std::string name);
		std::string		getName(void);
		void			announce(void);
	
};

Zombie*		zombieHorde( int N, std::string name );
#endif

