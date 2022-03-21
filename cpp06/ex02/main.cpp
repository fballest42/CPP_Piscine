/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:36:53 by fballest          #+#    #+#             */
/*   Updated: 2022/03/21 14:17:54 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Sons.hpp"

Base	*generate(void)
{
	int randnum = 0;
	Base *base_ptr;

	srand(std::time(NULL));
	randnum = rand() % 3;
	switch (randnum)
	{
		case 0:
			base_ptr = new A;
			std::cout << "A is constructed" << std::endl;
			break;
		case 1:
			base_ptr = new B;
			std::cout << "B is constructed" << std::endl;
			break;
		case 2:
			base_ptr = new C;
			std::cout << "C is constructed" << std::endl;
			break;
		default:
			return NULL;
	}
	return base_ptr;
}

void identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "A" << std::endl;
	if (b)
		std::cout << "B" << std::endl;
	if (c)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	int i = 0;

	while (i < 3)
	{
		try
		{
			if (i == 0)
			{
				A& a  = dynamic_cast<A&>(p);
				(void)a;
				std::cout << "A" << std::endl;
				i++;
				break;
			}
			else if (i == 1)
			{
				B& b  = dynamic_cast<B&>(p);
				(void)b;
				std::cout << "B" << std::endl;
				i++;
				break;
			}
			else
			{
				C& c  = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
				i++;
				break;
			}
		}
		catch (std::exception &e)
		{
			i++;
			continue;
		}
	}
}

int	main(void)
{
	std::cout << std::endl;
	std::cout << "_______MAKING RANDOM TEST OF 10._______" << std::endl;
	Base *Baseptr = generate();
	if (!Baseptr)
		return (-1);
	Base &Baseref = *Baseptr;
	std::cout << "Executing funtion for POINTER: 'void identify(Base* p)'" << std::endl;
	identify(Baseptr);
	std::cout << "Executing funtion for REFERENCE: 'void identify(Base& p)'" << std::endl;
	identify(Baseref);
	delete (Baseptr);
	std::cout << "_____________TEST FINISHED_____________" << std::endl;
	return (0);
}
