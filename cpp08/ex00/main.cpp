/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:30:37 by fballest          #+#    #+#             */
/*   Updated: 2022/03/23 00:24:45 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> prueba;
	prueba.push_back(2);
	prueba.push_back(4);
	prueba.push_back(6);
	prueba.push_back(8);
	prueba.push_back(10);

	try
	{
		std::cout << *(easyfind(prueba, 10)) << std::endl;
		std::cout << *(easyfind(prueba, 6)) << std::endl;
		std::cout << *(easyfind(prueba, 2)) << std::endl;
		std::cout << *(easyfind(prueba, 4)) << std::endl;
		std::cout << *(easyfind(prueba, 8)) << std::endl;
		std::cout << *(easyfind(prueba, 3)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
