/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:10:28 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 12:53:24 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Span				span(10000);
		Span 				sp = Span(5);

		std::vector<int>	range;

		for (int i = 0; i < 10000; i++)
			range.push_back(i);

		span.addNumber(range.begin(), range.end());

		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
