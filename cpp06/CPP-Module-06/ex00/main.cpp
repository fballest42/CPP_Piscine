/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:cpp08/CPP-Module-08/ex00/main.cpp
/*   Created: 2021/12/21 20:57:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 11:10:02 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"
=======
/*   Created: 2021/12/19 18:29:54 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 18:37:13 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex00/main.cpp

int	main(int argc, char **argv)
{
<<<<<<< HEAD:cpp08/CPP-Module-08/ex00/main.cpp
	std::vector<int>	v;

	for (int i = 0; i < 5; i++)
		v.push_back(i * 2);

	try
	{
		easyfind(v, 6);
		easyfind(v, 7);
	}
	catch (int)
	{
		std::cout << "The number couldn't be found" << std::endl;
	}

=======
	if (argc != 2)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return 1;
	}
	
	Convert	conversion(argv[1]);
	conversion.displayAtributes();
	
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex00/main.cpp
	return 0;
}
