/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:56:29 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/29 17:50:46 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class	Array
{
	private:
		T	*_array;

	public:
		Array(void) : _array(new T[1]) {this->_array[0] = 0;}
		Array(unsigned int n) : _array(new T[n + 1]){this->_array[n] = 0;}
		Array(const Array &copy) : _array(copy._array)
		{
			for (int i = 0; i < this->size(); i++)
				this->_array[i] = copy._array[i];
		}

		virtual ~Array(void) {delete[] this->_array;}
		Array	&operator=(const Array &op)
		{
			if (this == &op)
				return *this;
			for (int i = 0; i < this->size(); i++)
				this->_array[i] = op._array[i];
			return *this;
		}
		T	&operator[](size_t pos)
		{
			if (static_cast<int>(pos) > this->size() || pos < 0)
				throw PositionAccessException();
			return this->_array[pos];
		}
		
		int	size(void) const
		{
			int i;

			i = 0;
			while (this->_array[i] != 0)
				i++;
			return i;
		}

		class	PositionAccessException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Impossible to get that position";
			}
		};
};
