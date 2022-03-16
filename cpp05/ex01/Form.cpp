/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:37:09 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 16:06:33 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradesigner, int gradeexecuter) : _name(name), _signed(false), _gradesigner(gradesigner), _gradeexecuter(gradeexecuter)
{
	std::cout << "Form constructor, name and assigned grades." << std::endl;
	if (_gradesigner < 1 || _gradeexecuter < 1)
		throw Form::GradeTooHighException();
	if (_gradesigner > 150 || _gradeexecuter > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy.getName()), _signed(copy.getSigned()), _gradesigner(copy.getGradeSigner()), _gradeexecuter(copy.getGradeExecuter())
{
	std::cout << "Form copy constructor done." << std::endl;
	if (_gradesigner < 1 || _gradeexecuter < 1)
		throw Form::GradeTooHighException();
	if (_gradesigner > 150 || _gradeexecuter > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	std::cout << "Form destructor." << std::endl;
}

const std::string 	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeSigner(void) const
{
	return (this->_gradesigner);
}

int			Form::getGradeExecuter(void) const
{
	return (this->_gradeexecuter);
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeSigner())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &select)
{
	out << select.getName() << " form, with grade to be signed " << select.getGradeSigner()
		<< " and grade to be executed " << select.getGradeExecuter() << " and sighned status "
		<< select.getSigned() << std::endl;
	return (out);
}
