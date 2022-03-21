/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_templates.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:04:05 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 20:22:33 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TEMPLATES_HPP
# define FT_TEMPLATES_HPP

#include <iostream>

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
	return a >= b ? a : b;
}

template <typename T>
T const	&min(T const &a, T const &b)
{
	return a <= b ? a : b;
}

#endif