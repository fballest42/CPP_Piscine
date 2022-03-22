/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:57 by fballest          #+#    #+#             */
/*   Updated: 2022/03/22 11:34:11 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

int		g_count = 0;

template <typename T>
void    iter(T *array, int num, void (*f)(T &))
{
	int     i = 0;
	try
	{
		if (!array || num == 0)
			return ;
		while (i < num && g_count < 4)
		{
			f(array[i]);
			g_count++;
			i++;
		}  
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
}

#endif