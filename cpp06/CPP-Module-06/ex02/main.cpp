/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:23:08 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/29 09:19:44 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "It's type A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "It's type B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "It's type C" << std::endl;
	else
		throw "Didn't find the type";
}

Base	*generate(void)
{
	int	x;
	Base	*ret;

	x = 3;
	switch (x)
	{
		case 1:
			ret = new A();
			
			return ret;
			break;
		
		case 2:
			ret = new B();
			return ret;
			break;
		
		case 3:
			ret = new C();
			return ret;
			break;
		
		default:
			break;
	}
	return 0;
}

int	main(void)
{
	try
	{
		Base	*checkType;

		checkType = generate();
		identify(checkType);
	}
	catch (const char *error)
	{
		std::cout << error << '\n';
	}
	
	return 0;
}
