/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:51:31 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 16:10:48 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main ()
{
	std::string     brain = "HI THIS IS BRAIN";
	std::string		*stringPTR = &brain;
	std::string		&stringREF = brain;

	std::cout << "&brain = " << &brain << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "&stringREF = " << &stringREF << std::endl;
	std::cout << "---------------------------------------" << std::endl;	
	std::cout << "*stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;

	return (0);
}