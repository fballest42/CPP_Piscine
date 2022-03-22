/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:30:37 by fballest          #+#    #+#             */
/*   Updated: 2022/03/22 11:35:48 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include "iter.hpp"
#include <iostream>

class Cosas
{
	private:
		std::string		_name;
	public:
		Cosas(std::string name): _name(name)
		{
			std::cout << "Constructor de Cosas." << std::endl;
		}
		~Cosas(void)
		{
			std::cout << "Destructor de Cosas." << std::endl;
		}
		std::string	get_name(void)
		{
			return (this->_name);
		}
		static void	whatisit(Cosas &esta)
		{
			std::cout << "Soy una " << esta.get_name() << "." << std::endl;
		}
};

template<typename T>
void	eater(T &exec)
{
	std::cout << exec << ", I´m eating please do not disturb." << std::endl;
}

template<typename T>
void	drinker(T &exec)
{
	std::cout << exec << ", I´m drinking some fresh water." << std::endl;
}

template<typename T>
void	thinker(T &exec)
{
	std::cout << exec << ", I´m thinking like Socrates." << std::endl;
}

int main(void)
{
	std::cout << "---PRUEBA UNO ARRAY DE ENTEROS---" << std::endl;
	int		prueba[4] = {5, 6, 2, 1};
	
	g_count = 0;
	iter(prueba, 2, eater);
	std::cout << std::endl;
	g_count = 0;
	iter(prueba, 4, drinker);
	std::cout << std::endl;
	g_count = 0;
	iter(prueba, 1, thinker);
	std::cout << std::endl;
	
	std::cout << "---PRUEBA DOS ARRAY DE STRINGS---" << std::endl;
	std::string prueba2[4] = {"Ana", "Luis", "Juan", "Eva"};
	g_count = 0;
	iter(prueba2, 4, eater);
	std::cout << std::endl;
	g_count = 0;
	iter(prueba2, 1, drinker);
	std::cout << std::endl;
	g_count = 0;
	iter(prueba2, 2, thinker);
	std::cout << std::endl;

	std::cout << "---PRUEBA TRES ARRAY DE CLASES---" << std::endl;
	Cosas prueba3[4] = {Cosas("Taza"), Cosas("Tetera"), Cosas("Cuchara"), Cosas("Cucharon")};
	g_count = 0;
	std::cout << std::endl;
	iter(prueba3, 1, Cosas::whatisit);
	std::cout << std::endl;
	g_count = 0;
	iter(prueba3, 2, Cosas::whatisit);
	std::cout << std::endl;
	g_count = 0;
	iter(prueba3, 4, Cosas::whatisit);
	std::cout << std::endl;
	
	return (0);
}
