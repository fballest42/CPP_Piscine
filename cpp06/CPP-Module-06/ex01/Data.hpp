/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
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
