/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:23:33 by fballest          #+#    #+#             */
/*   Updated: 2022/03/17 14:02:23 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Form    *createPresidentialPardonForm(std::string const &target);
Form    *createShrubberyCreationForm(std::string const &target);
Form    *createRobotomyRequestForm(std::string const &target);

Interm::Intern(void)
{
	std::cout << "Interm default constructor." << std::endl; 
}

Interm::Intern(const Intern &copy)
{
	std::cout << "Intern copy constructor." << std::endl;
	*this = copy;
}

Interm::~Intern(void)
{
	std::cout << "Intern destructor." << std::endl;
}

Interm::Intern  &operator=(const Intern &equal)
{
	std::cout << "Intern equal constructor." << std::endl;
	if (this == &equal)
		return (*this)
	return (*this);
}

Form	*Interm::makeForm(std::string form, std::string target) const
{
	std::string lform[3] ={"Shrubbery_creation", "Robotomy_request", "Presidential_pardon"};
	Form	*(*f[3])(const std::string &);
	Form	*newform;

	f[0] = &createShrubberyCreationForm;
	f[1] = &createRobotomyRequestForm;
	f[2] = &createPresidentialPardonForm;

	int i = 0;
	while (i < 3)
	{
		if (lform[i] == form)
		{
			newform = (f[i])(target);
			std::cout << "Itern creates " << newform.getName() << " form." << std::endl;
			return (ret);
		}
	}
	throw Intern::NonFormException();
}

Form	*createPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardomForm(target));	
}

Form	*createRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));	
}

Form	*createShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}
