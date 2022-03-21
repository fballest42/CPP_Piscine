/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:10:08 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 12:52:11 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _size(n), _assignedValues(0)
{
	this->_values.reserve(n);
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &copy)
{
	std::cout << "Span copy constructor called" << std::endl;
	this->_size = copy._size;
	this->_values = copy._values;
	this->_assignedValues = copy._assignedValues;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

Span	&Span::operator=(const Span &op)
{
	if (this == &op)
		return *this;
	this->_size = op._size;
	this->_values = op._values;
	this->_assignedValues = op._assignedValues;
	return *this;
}

void			Span::addNumber(int n)
{
	if (this->_assignedValues < (int)this->_size)
	{
		this->_values.push_back(n);
		this->_assignedValues++;
	}
	else
		throw Span::PositionAccessException();
}

void			Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	this->_values.insert(this->_values.end(), begin, end);
	this->_assignedValues = end - begin;
}

int	Span::shortestSpan(void) const
{
	int	shortest;

	shortest = INT32_MAX;
	if (this->_size <= 1 || this->_assignedValues <= 1)
		throw Span::NoNumbersToSpan();
	for (std::vector<int>::const_iterator it = this->_values.begin(); it != this->_values.end(); it++)
	{
		for (std::vector<int>::const_iterator jt = it + 1; jt != this->_values.end(); jt++)
		{
			if (std::abs(*it - *jt) < shortest)
				shortest = std::abs(*it - *jt);
		}
	}
	return shortest;
}

int	Span::longestSpan(void) const
{
	std::vector<int>	copy(this->_values);
	std::sort(copy.begin(), copy.end());
	return *(copy.end() - 1) - copy[0];
}
