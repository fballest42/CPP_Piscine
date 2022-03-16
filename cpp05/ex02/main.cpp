/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:10:21 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 12:41:47 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
	try
	{
		Bureaucrat		tester("Simon", 125);
		Bureaucrat		tester2("Anton", 25);
		Bureaucrat		tester3("Ramon", 5);
		Form			form("Compra", 10, 10);
		Form			form2("Venta", 50, 50);
		Form			form3("Alquiler", 130, 130);
		
		std::cout << tester << std::endl;
		std::cout << tester2 << std::endl;
		std::cout << tester3 << std::endl;
		std::cout << form << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;

		tester.signForm(form);
		tester.signForm(form2);
		tester.signForm(form3);
		tester2.signForm(form);
		tester2.signForm(form2);
		tester2.signForm(form3);
		tester3.signForm(form);
		tester3.signForm(form2);
		tester3.signForm(form3);

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
