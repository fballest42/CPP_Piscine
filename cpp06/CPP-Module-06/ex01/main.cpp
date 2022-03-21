/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:cpp07/CPP-Module-07/ex01/main.cpp
/*   Created: 2021/12/19 20:30:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 20:55:03 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
=======
/*   Created: 2021/12/21 19:55:07 by rcabezas          #+#    #+#             */
/*   Updated: 2022/03/21 00:49:51 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex01/main.cpp

template<typename T>
void	print(const T &value)
{
<<<<<<< HEAD:cpp07/CPP-Module-07/ex01/main.cpp
	std::cout << value << std::endl;
}

int		main(void)
{
	int	int_arr[5] = {1, 2, 3, 4, 5};
	std::string str_arr[3] = {"Hello", "How are you?", "Goodbye"};
=======
	Data		*data;
	uintptr_t	number;
	Data		*returned;

	data = new Data;
	data->n = 5;
	number = serialize(data);
	std::cout << number << std::endl;
	returned = deserialize(number);
	std::cout << returned->n << std::endl;
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex01/main.cpp

	std::cout << "--INT ARRAY--" << std::endl;
	::iter(int_arr, 5, &print);
	std::cout << "--STRING ARRAY--" << std::endl;
	::iter(str_arr, 3, &print);
	return 0;
}
