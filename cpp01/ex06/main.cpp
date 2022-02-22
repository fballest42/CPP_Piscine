/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:16:20 by fballest          #+#    #+#             */
/*   Updated: 2022/02/22 14:46:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Karen.hpp"

int     main(int argc, char **argv)
{
	if (argc == 1 || argc > 2)
	{
		std::cout << "Invalid arguments, karenFilter needs one argument." << std::endl;
		return (1);
	}
	std::string		msg = (std::string(argv[1]));
	if (msg != "DEBUG" && msg != "INFO" && msg != "WARNING" && msg != "ERROR")
	{
		std::cout << "KAREN HASN'T GOIT THIS OPTION" << std::endl;
		return (1);
	}
	Karen			karen;
	karen.complain(msg);
	return (0);
}