/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:09:58 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 12:43:25 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int 		_size;
		std::vector<int>	_values;
		int					_assignedValues;

	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span(void);
		Span	&operator=(const Span &op);

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int	shortestSpan(void) const;
		int	longestSpan(void) const;

		class	PositionAccessException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Impossible to add that number";
			}
		};

		class	NoNumbersToSpan : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Impossible to span";
			}
		};
};
