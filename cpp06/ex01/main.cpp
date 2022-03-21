/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:36:53 by fballest          #+#    #+#             */
/*   Updated: 2022/03/21 12:15:44 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	public:
		int		num;
};

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data		*data = new Data;
	data->num = 42;
	uintptr_t	serial = serialize(data);
	Data		*deserial = deserialize(serial);

	std::cout << "Initial Number (data->num): " << data->num << std::endl;
	std::cout << "Pointer (data->num): " << data << std::endl;
	std::cout << "Serialized: " << serial << std::endl;
	std::cout << "Pointer Deserialized: " << deserial << std::endl;
	std::cout << "Number Deserialized: " << deserial->num << std::endl;

	delete(data);
	return (0);
}
