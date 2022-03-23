/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:57 by fballest          #+#    #+#             */
/*   Updated: 2022/03/23 00:19:34 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &vector, int val)
{
	class  NoElementException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Could not find the element.");
		}
	};
	typename T::iterator iter;
	iter = std::find(vector.begin(), vector.end(), val);
	if (iter != vector.end())
		return (iter);
	else
		throw NoElementException();
}
