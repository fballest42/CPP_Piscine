/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:12:58 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 12:50:56 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
		std::string		_name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void			setName(std::string name);
		std::string		getName(void);
		void			announce(void);
	
};

Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );
#endif

