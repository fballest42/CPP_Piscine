/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:30:37 by fballest          #+#    #+#             */
/*   Updated: 2022/03/23 11:19:08 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "TEST EXCEPCION VECTOR VACIO" << std::endl;
	Span span_empty = Span(5);
    try
    {
        std::cout << span_empty.shortestSpan() << std::endl;
    }
        catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

	std::cout << "TEST EXCEPCION VECTOR LLENO" << std::endl;
	Span span_full = Span(3);
    span_full.addNumber(1);
    span_full.addNumber(2);
	span_full.addNumber(3);
    try
    {
        span_full.addNumber(4);     
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() <<  std::endl;
    }
    
	std::cout << "TEST FUNCION SHORTESTSPAN" << std::endl;
    Span span_short = Span(4);
	Span span_short2 = Span(2);
	Span span_short3 = Span(1);
    span_short.addNumber(35);
    span_short.addNumber(12);
    span_short.addNumber(-8);
    span_short.addNumber(1);
    std::cout << span_short.shortestSpan() << std::endl;
    span_short2.addNumber(2147483647);
    span_short2.addNumber(-2147483648);
    std::cout << span_short2.shortestSpan() << std::endl;
	span_short3.addNumber(25);
	try
    {
        std::cout << span_short3.shortestSpan() << std::endl;    
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() <<  std::endl;
    }

	std::cout << "TEST FUNCION LONGESTSPAN" << std::endl;
    Span span_long = Span(4);
	Span span_long2 = Span(2);
	Span span_long3 = Span(1);
    span_long.addNumber(35);
    span_long.addNumber(12);
    span_long.addNumber(-8);
    span_long.addNumber(1);
	std::cout << span_long.longestSpan() << std::endl;
    span_long2.addNumber(2147483647);
    span_long2.addNumber(-2147483648);
    std::cout << span_long2.longestSpan() << std::endl;
	span_long3.addNumber(25);
	try
    {
        std::cout << span_long3.longestSpan() << std::endl;   
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() <<  std::endl;
    }
	return (0);
}
