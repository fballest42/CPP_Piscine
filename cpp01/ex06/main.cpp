/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:16:20 by fballest          #+#    #+#             */
/*   Updated: 2022/01/24 13:22:16 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Karen.hpp"

int     main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "Invalid arguments.\n" << std::endl;
		return (1);
	}
	std::string		msg = (std::string(argv[1]));
	if (msg == "EXIT")
		return (0);
	Karen			karen;

	karen.complain(msg);
	return (0);
}