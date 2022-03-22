/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:57 by fballest          #+#    #+#             */
/*   Updated: 2022/03/22 13:11:54 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_n;
		T *_array;
		class TooBigtogoException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("You are out of bounds.");
				}
		};
	public:
		Array(): _n(0)
		{
			std::cout << "Default Array constructor." << std::endl;
			_array = NULL;
		}
		Array(unsigned int n): _n(n)
		{
			if (n)
			{
				std::cout << "Array constructor." << std::endl;
				this->_array = new T[n]();
			}
			else
				_array = NULL;
		}
		~Array()
		{
			if(_array)
				delete _array;
			std::cout << "Default Array destructor." << std::endl;
		}
		Array &operator=(Array const &equal)
		{
			unsigned int i = 0;
			if (this == &equal)
				return (*this);
			if (_array)
				delete[] _array;
			_n = equal._n;
			_array = new T[equal._n]();
			while (i < equal._n)
			{
				_array[i] = equal._array[i];
				i++;
			}
			return (*this);
		}
		Array (const Array &copy)
		{
			_array = NULL;
			*this = copy;
		}
		T &operator[](const unsigned int &id)
		{
			if (id >= _n)
				throw TooBigtogoException();
			return (_array[id]);
		}
		unsigned int Size() const
		{
			return (_n);	
		}
};

#endif
