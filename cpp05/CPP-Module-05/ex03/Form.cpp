/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 09:43:47 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/28 17:54:33 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor called" << std::endl;
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy.getName()), _signed(copy.getSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
	std::cout << "Form copy constructor called" << std::endl;
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

const std::string	Form::getName(void) const
{
	return this->_name;
}

bool				Form::getSigned(void) const
{
	return this->_signed;
}

int			Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int			Form::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooHighException();
	else
		std::cout << "Executed " << this->getName() << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Form &instance)
{
	out << instance.getName() << " form, with execute grade " << instance.getGradeToExecute()
		<< " and grade to be signed " << instance.getGradeToSign() << " is signed? "
		<< instance.getSigned() << std::endl;
	return out;
}
