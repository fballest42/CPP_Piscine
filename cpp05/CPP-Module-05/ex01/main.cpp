/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 09:05:05 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 12:04:20 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureaucrat("Godfrey", 70);
		Form		form("Law", 40, 40);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		bureaucrat.increaseGrade(60);
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
