/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:57 by fballest          #+#    #+#             */
/*   Updated: 2022/03/23 11:46:11 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>

class Span;

class Span
{
	private:
	std::vector<int>			_array;
	std::vector<int>::iterator	_start;
	std::vector<int>::iterator	_last;
	std::vector<int>::iterator	_finish;
	
	public:
	Span();
	Span(unsigned int N);
	Span(const Span &copy);
	Span &operator=(const Span &equal);
	~Span();

	void	addNumber(int val);
	void	addNumber(const std::vector<int>::iterator begin, const std::vector<int>::iterator end);
	unsigned long	shortestSpan() const;
	unsigned long	longestSpan() const;
	std::vector<int>::iterator	begin() const;
	std::vector<int>::iterator end() const;
	
	class	NoSpanException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Error No Span.");
		}	
	};
	class	CompleteSpanException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Error Span is full.");
		}	
	};
};

#endif
