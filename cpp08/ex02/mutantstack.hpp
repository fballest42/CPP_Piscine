/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:57 by fballest          #+#    #+#             */
/*   Updated: 2022/03/23 14:49:34 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename MutantStack::container_type::iterator iterator;
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &copy) {*this = copy;}
		~MutantStack() {}
		MutantStack &operator=(const MutantStack &equal)
		{
			std::stack<T>::operator=(equal);
			return (*this);
		}
		T &operator[](const unsigned int &id)
		{
			return (this->c[id]);
		}
		typename MutantStack::container_type::iterator begin()
		{
			return (this->c.begin());
		}
		typename MutantStack::container_type::const_iterator begin() const
		{
			return (this->c.begin());
		}
		typename MutantStack::container_type::iterator end()
		{
			return (this->c.end());
		}
		typename MutantStack::container_type::const_iterator end() const
		{
			return (this->c.end());
		}
};

#endif
