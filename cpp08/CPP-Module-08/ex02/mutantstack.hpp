/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:06:43 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 12:58:48 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>(){};
		MutantStack(const MutantStack &copy) : std::stack<T>(copy){};
		virtual ~MutantStack(void){};
		MutantStack	&operator=(const MutantStack &op)
		{
			if (this == &op)
				return *this;
			std::stack<T>::operator=(op);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin(void) {return std::stack<T>::c.begin();};
		iterator	end(void) {return std::stack<T>::c.end();};

		const_iterator	begin(void) const {return std::stack<T>::c.begin();};
		const_iterator	end(void) const {return std::stack<T>::c.end();};
};
