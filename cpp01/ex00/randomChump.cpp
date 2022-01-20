/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:26:36 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 12:14:32 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassZombie.hpp"

void randomChump( std::string name )
{
	std::cout << "Mordor working on creating a Zombie in the HEAP" << std::endl; 
	Zombie  new_zom(name);
}