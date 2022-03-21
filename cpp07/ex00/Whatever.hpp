/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:03:09 by fballest          #+#    #+#             */
/*   Updated: 2022/03/21 13:25:47 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include<iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	aux;

	aux = a;
	a = b;
	b = aux;
}

template <typename T>
T const	&max(T const &a, T const &b)
{
	if (a >= b)
		return (a);
	return (b);
}

template <typename T>
T const	&min(T const &a, T const &b)
{
	if (a <= b)
		return (a);
	return (b);
}

#endif
