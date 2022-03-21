/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD:cpp07/CPP-Module-07/ex01/iter.hpp
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:24:10 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 20:50:15 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	iter(T *arr, int n, void (*fun)(const T &element))
{
	for (int i = 0; i < n; i++)
		fun(arr[i]);
}
=======
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:59:36 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/21 20:04:23 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

struct	Data
{
	int	n;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex01/Data.hpp
