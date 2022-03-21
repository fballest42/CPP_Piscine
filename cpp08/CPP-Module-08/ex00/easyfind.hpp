/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:58:01 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 11:36:29 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>

template <class T>
void	easyfind(T &t, int n)
{
	if (std::find(t.begin(), t.end(), n) != t.end())
		std::cout << "Number " << n << " found" << std::endl;
	else
		throw 1;
}
