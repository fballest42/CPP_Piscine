/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:38:42 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/29 09:10:26 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cctype>
#include <cstdlib>

Convert::Convert(void)
{
	std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert(char *arg)
{
	std::cout << "Convert constructor called" << std::endl;
	this->_floater = std::atof(arg);
	this->_integer = std::atoi(arg);
	if (this->_integer == 0 && arg[0] != '0')
		this->_character = "impossible";
	else if (std::isprint(this->_integer))
		this->_character = static_cast<double>(this->_integer);
	else
		this->_character = "Non printable";
	this->_dbl = static_cast<double>(this->_floater);
}

Convert::Convert(const Convert &copy)
{
	std::cout << "Convert copy constructor called" << std::endl;
	*this = copy;
}

Convert::~Convert(void)
{
	std::cout << "Convert destructor called" << std::endl;
}

Convert	&Convert::operator=(const Convert &op)
{
	std::cout << "Convert assignation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->_character = op._character;
	this->_dbl = op._dbl;
	this->_floater = op._floater;
	this->_integer = op._integer;
	return *this;
}

void	Convert::displayAtributes(void)
{
	std::cout << "char: " << this->_character << std::endl;
	if (this->_character == "impossible")
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << this->_integer << std::endl;
	if (this->_character == "impossible" && this->_floater == 0)
	{
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "imposible" << std::endl;
	}
	else
	{
		std::cout << "float: " << this->_floater << std::endl;
		std::cout << "double: " << this->_dbl << std::endl;
	}
}
