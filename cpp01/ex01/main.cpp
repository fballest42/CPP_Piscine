/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:22:51 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 14:52:44 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* 	zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	**horde;
	std::string		num;

	i = 0;
	while (i < N)
	{
		num = std::to_string(i);
		horde[i] = new Zombie((name + num));
		i++;
	}
	return (*horde);
}


int		parse_hordesize(void)
{
	int		i;

	std::cout << "How many Zombies in the Horde?: ";
	while(!(std::cin >> i))
	{
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "How many Zombies in the Horde?: ";
	}
	return (i);
}

int     main()
{
	Zombie		**horde;
	int			number;
	int			i;

	while ((number = parse_hordesize()) <= 0);
	std::cout << "You choose an Horde Size of: " << number << " Zombies" << std::endl;
	std::cout << "CREATING ZOMBIES HORDE" << std::endl;
	*horde = zombieHorde(number, "Zombie nº");
	delete *horde;
	return (0);
}