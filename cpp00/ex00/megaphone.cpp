/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:31:31 by fballest          #+#    #+#             */
/*   Updated: 2022/01/12 10:21:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int		i = 0, z = 1;
	char 	ch;
	
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (z < argc)
		{
			i = 0;
			while (argv[z][i])
			{
				if (argv[z][i] >= 97 && argv[z][i] <= 122)
					ch = std::toupper (argv[z][i]);
				else
					ch = char(argv[z][i]);
				std::cout << ch;
				i++;
			}
			z++;
		}
	}
	std::cout << std::endl;
	return (0);
}