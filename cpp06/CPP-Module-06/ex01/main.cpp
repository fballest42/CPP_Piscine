/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:55:07 by rcabezas          #+#    #+#             */
/*   Updated: 2022/03/21 00:49:51 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		*data;
	uintptr_t	number;
	Data		*returned;

	data = new Data;
	data->n = 5;
	number = serialize(data);
	std::cout << number << std::endl;
	returned = deserialize(number);
	std::cout << returned->n << std::endl;

	return 0;
}
