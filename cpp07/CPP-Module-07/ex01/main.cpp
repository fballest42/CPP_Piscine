/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:30:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 20:55:03 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(const T &value)
{
	std::cout << value << std::endl;
}

int		main(void)
{
	int	int_arr[5] = {1, 2, 3, 4, 5};
	std::string str_arr[3] = {"Hello", "How are you?", "Goodbye"};

	std::cout << "--INT ARRAY--" << std::endl;
	::iter(int_arr, 5, &print);
	std::cout << "--STRING ARRAY--" << std::endl;
	::iter(str_arr, 3, &print);
	return 0;
}
