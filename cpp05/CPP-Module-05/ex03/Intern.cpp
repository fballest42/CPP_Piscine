/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 19:32:02 by rcabezas          #+#    #+#             */
/*   Updated: 2022/03/17 12:28:28 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Form	*createPresidentialPardonForm(std::string const & target);
Form	*createRobotomyRequestForm(std::string const & target);
Form	*createShrubberyCreationForm(std::string const & target);

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &op)
{
	std::cout << "Intern assignation operator called" << std::endl;
	if (this == &op)
		return *this;
	return *this;
}


Form	*Intern::makeForm(std::string form, std::string target) const
{
	std::string	forms[3] = {"robotomy request", "Shrubbery creation", "presidential pardon"};
	Form		*(*f[3])(const std::string &);
	Form		*ret;

	f[0] = &createRobotomyRequestForm;
	f[1] = &createShrubberyCreationForm;
	f[2] = &createPresidentialPardonForm;

	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == form)
		{
			ret = (f[i])(target);
			std::cout << "Intern created " << ret->getName() << std::endl;
			return ret;
		}
	}
	throw Intern::UnknownFormException();
}

Form	*createPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form	*createRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form	*createShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}