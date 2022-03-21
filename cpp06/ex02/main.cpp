/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:36:53 by fballest          #+#    #+#             */
/*   Updated: 2022/03/21 09:18:21 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>

class Base { public: virtual ~Base(){}; };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	Base *ptr;

	srand(std::time(NULL));
	int num = rand() % 3;
	switch (num)
	{
		case 0:
			ptr = new A;
			std::cout << "Building A" << std::endl;
			break;
		case 1:
			ptr = new B;
			std::cout << "Building B" << std::endl;
			break;
		case 2:
			ptr = new C;
			std::cout << "Building C" << std::endl;
			break;
		default:
			return NULL;
	}
	return ptr;
}

void identify(Base* p)
{
	A *a;
	B *b;
	C *c;

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
	int i = -1;

	while (i < 3)
	{
		i++;
		if (i == 0)
		{
			try
			{
				A &a  = dynamic_cast<A&>(p);
				(void) a;
				std::cout << "A" << std::endl;
				break;
			}
			catch (std::exception &e)
			{
				continue;
			}
		}
		
		if (i == 1)
		{
			try
			{
				B &b  = dynamic_cast<B&>(p);
				(void) b;
				std::cout << "B" << std::endl;
				break;
			}
			catch (std::exception &e)
			{
				continue;
			}
		}

		if (i == 2)
		{
			try
			{
				C &c  = dynamic_cast<C&>(p);
				(void) c;
				std::cout << "C" << std::endl;
				break;
			}
			catch (std::exception &e)
			{
				continue;
			}
		}
	}
}

void	testrandom()
{
	int i = 0;
	int a,b,c;
	
	a = b = c = 0;
	srand(std::time(NULL));
	while (i < 10000)
	{
		int num = rand() % 3;
		if (num == 0)
			a++;
		if (num == 1)
			b++;
		if (num == 2)
			c++;
		i++;
	}
	std::cout << "Testing random:" << std::endl;
	std::cout << "(0):" << a << std::endl;
	std::cout << "(1):" << b << std::endl;
	std::cout << "(2):" << c << std::endl;
}

int	main(void)
{
	testrandom();
	
	Base *mysterious_ptr = generate();
	if (!mysterious_ptr)
		return (-1);
	Base &mysterious_ref = *mysterious_ptr;

	std::cout << "Calling: void identify(Base* p)" << std::endl;
	identify(mysterious_ptr);
	std::cout << "Calling: void identify(Base& p)" << std::endl;
	identify(mysterious_ref);
	delete (mysterious_ptr);
	return (0);
}
