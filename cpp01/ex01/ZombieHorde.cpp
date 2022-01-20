/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:46:01 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 15:46:16 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* 	zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].setName(name + std::to_string(i));
		horde[i].announce();
		i++;
	}
	return (horde);
}
