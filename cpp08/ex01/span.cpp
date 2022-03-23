/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:57 by fballest          #+#    #+#             */
/*   Updated: 2022/03/23 01:02:48 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>

Span::Span()
{
	std::cout << "default constructor." << std::endl;	
}

Span::Span(unsigned int N)
{
	std::cout << "standar constructor." << std::endl;
	this->_array = std::vector<int>(N);
	this->_start = this->_array.begin();
	this->_finish = this->_array.end();
	this->_last = this->_array.begin();
}

Span::Span(const Span &copy)
{
	std::cout << "copy constructor" << std::endl;
	if (this == &copy)
		return (*this);
	*this = copy;
	return (*this);
}

Span	&Span::operator=(const Span &equal)
{
	if (this == &equal)
		return (*this)
	this->_array.clear();
	this->_array = std::vector<int>(equal._array.size());
	this->_start = this->_array.begin();
	this->_last = this->_array.begin();
	this->_finish = this->_array.end();
	addNumbers(equal._start, equal_last);
	return (*this);
}

Span::~Span()
{
	std::cout << "destructor" << std::endl;
}

void	Span::addNumber(int val)
{
	if (this->_last == end())
		throw CompleteSpanException();
	else
	{
		*this->_last = val;
		this->_last++;
	}
}

void	Span::addNumbers(const std::vector<int>::iterator begin, const std::vector<int>::iterator end)
{
	std::vector<int>::iterator iter = begin;
	while (begin != end)
	{
		addNumber(*iter);
		iter++;
	}
}

long 	Span::shortesSpan() const
{
	long min = LONG_MAX;
	if ((this->_last - begin()) < 2)
		throw NoSpanException();
	
}
