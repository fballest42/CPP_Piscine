/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:26:01 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 12:45:45 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie		*new_zom;
	
	std::cout << "Mordor working on creating a Zombie in the STACK" << std::endl; 
	new_zom = new Zombie(name);
	return (new_zom);
}