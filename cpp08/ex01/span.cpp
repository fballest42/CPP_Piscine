/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:57 by fballest          #+#    #+#             */
/*   Updated: 2023/03/29 22:55:38 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
	std::cout << "default constructor." << std::endl;	
}

Span::Span(unsigned int N)
{
	std::cout << "standar constructor." << std::endl;
	this->_array = std::vector<int>(N);
	this->_start = std::begin(this->_array);
	this->_finish = std::end(this->_array);
	this->_last = std::begin(this->_array);
}

Span::Span(const Span &copy)
{
	std::cout << "copy constructor" << std::endl;
	*this = copy;
}

Span	&Span::operator=(const Span &equal)
{
	if (this == &equal)
		return (*this);
	this->_array.clear();
	this->_array = std::vector<int>(equal._array.size());
	addNumber(equal._start, equal._last);
	this->_start = this->_array.begin();
	this->_last = this->_array.begin();
	this->_finish = this->_array.end();
	return (*this);
}

Span::~Span()
{
	std::cout << "destructor" << std::endl;
}

void	Span::addNumber(int val)
{
	if (this->_last == this->_array.end())
		throw CompleteSpanException();
	else
	{
		*this->_last = val;
		this->_last++;
	}
}

void	Span::addNumber(const std::vector<int>::iterator begin, const std::vector<int>::iterator end)
{
	std::vector<int>::iterator iter = begin;
	while (begin != end)
	{
		addNumber(*iter);
		iter++;
	}
}

unsigned long 	Span::shortestSpan() const
{
	if ((this->_last - this->_array.begin()) <= 1)
		throw NoSpanException();
	std::SORT(this->_start, this->_finish);
	unsigned long min = (long)this->_array[1] - (long)this->_array[0];
	int size = this->_array.size();
	int	i = 0;
	while (i < size)
	{
		if ((((unsigned long)this->_array[i + 1] - (unsigned long)this->_array[i])) < min)
			min = ((unsigned long)this->_array[i + 1] - (unsigned long)this->_array[i]);
		i++;
	}
	return (min);
}

unsigned long	Span::longestSpan(void) const
{
	if (this->_array.size() <= 1)
		throw NoSpanException();
	std::vector<int>::iterator 		minimum;
	std::vector<int>::iterator		maximum;
	minimum = std::min_element(this->_start, this->_finish);
	std::cout << "MINIMUM " << *minimum << std::endl;
	maximum = std::max_element(this->_start, this->_finish);
	std::cout << "MAXIMUM " << *maximum << std::endl;
	return ((unsigned long)*maximum - (unsigned long)*minimum);
}
