/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:10:21 by fballest          #+#    #+#             */
/*   Updated: 2022/03/18 11:19:54 by fballest         ###   ########.fr       */
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

		Intern myIntern;
		Intern myIntern_2;
		Intern myIntern_3;
		Intern myIntern_n;
		Bureaucrat bur("TOM", 1);
		Form	*form;
		Form	*form_2;
		Form	*form_3;
		Form	*form_n;

		form = myIntern.makeForm("Robotomy_request", "ALL");
		bur.signForm(*form);
		bur.executeForm(*form);
		form_2 = myIntern_2.makeForm("Shrubbery_creation", "ALL_2");
		bur.signForm(*form_2);
		bur.executeForm(*form_2);
		form_3 = myIntern_3.makeForm("Presidential_pardon", "ALL_3");
		bur.signForm(*form_3);
		bur.executeForm(*form_3);
		form_n = myIntern_n.makeForm("do_not_do_it", "ALL_N");
		bur.signForm(*form_n);
		bur.executeForm(*form_n);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
