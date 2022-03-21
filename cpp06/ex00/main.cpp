/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:36:53 by fballest          #+#    #+#             */
/*   Updated: 2022/03/21 12:33:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <cctype>
#include <iostream>
#include <cmath>
#include <string>

int main(int argc, char **argv)
{
	double	input;
	char	c;
	int		i;
	float	f;
    
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (-1);
	}
	if (std::isprint(argv[1][0]) && !argv[1][1])
		input = static_cast<double>(argv[1][0]);
	else
		input = std::atof(argv[1]);
	c = static_cast<char>(input);
	i = static_cast<int>(input);
	f = static_cast<float>(input);
    
    //FOR CHAR CONVERSION
	if (std::isnan(input) || std::isinf(input))
		std::cout << "Char impossible." << std::endl;
	else if (!std::isprint(c) || i > 126)
		std::cout << "Char non printable." << std::endl;
	else
		std::cout << "Char: " << static_cast<char>(input) << std::endl;
	// FOR INT CONVERSION
    if (std::isnan(input) || std::isinf(input) || input > INT_MAX || input < INT_MIN)
		std::cout << "Int impossible." << std::endl;
	else
		std::cout << "Int :" << static_cast<int>(input) << std::endl;
	// FOR FLOAT CONVERSION
    
	if (std::isnan(input) || std::isinf(input))
		std::cout << "Float: " << static_cast<float>(input) << "f" << std::endl;
	else if (input == i)
        std::cout << "Float: " << static_cast<float>(input) << ".0f" << std::endl;
    else
		std::cout << "Float: " << static_cast<float>(input) << "f" << std::endl;

	// FOR DOUBLE CONVERSION
    if (std::isnan(input) || std::isinf(input))
		std::cout << "Double: " << static_cast<double>(input) << "f" << std::endl;
	else if (input == (int)input)
	    std::cout << "Double: " << static_cast<double>(input) << ".0" << std::endl;
    else
        std::cout << "Double: " << static_cast<double>(input) << std::endl;
    return (0);
}