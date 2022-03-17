/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:10:21 by fballest          #+#    #+#             */
/*   Updated: 2022/03/17 14:29:17 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int     main(void)
{
	try
	{
		Bureaucrat	bureaucrat("Ramon", 1);
		Bureaucrat	bureau("Ramon_2", 150);
		ShrubberyCreationForm shurbbery("Alex");
		RobotomyRequestForm robotmy("Juan");
		PresidentialPardomForm president("Pedro");
		ShrubberyCreationForm shurbbery_2("Alex_2");
		RobotomyRequestForm robotmy_2("Juan_2");
		PresidentialPardomForm president_2("Pedro_2");
		
		bureaucrat.signForm(shurbbery);
		bureaucrat.executeForm(shurbbery);
		bureaucrat.signForm(robotmy);
		bureaucrat.executeForm(robotmy);
		bureaucrat.signForm(president);
		bureaucrat.executeForm(president);

		bureau.signForm(shurbbery_2);
		bureau.executeForm(shurbbery_2);
		bureau.signForm(robotmy_2);
		bureau.executeForm(robotmy_2);
		bureau.signForm(president_2);
		bureau.executeForm(president_2);

		Form *rrf;
		Intern someRandomIntern;

		rrf = someRandomIntern.makeForm("holi", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
