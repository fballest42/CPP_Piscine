/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:29:54 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/19 18:37:13 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return 1;
	}
	
	Convert	conversion(argv[1]);
	conversion.displayAtributes();
	
	return 0;
}
