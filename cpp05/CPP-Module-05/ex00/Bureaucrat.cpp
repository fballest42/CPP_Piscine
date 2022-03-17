/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 09:02:39 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 09:41:30 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int _grade) : _name(name)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = _grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->_grade = op.getGrade();
	return *this;
}

const std::string		Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::increaseGrade(int increment)
{
	if (this->getGrade() - increment < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= increment;
}

void	Bureaucrat::decreaseGrade(int decrement)
{
	if (this->getGrade() + decrement > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += decrement;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance)
{
	out << instance.getName() << ", bureaucrat grade " << instance.getGrade() << std::endl;
	return out;
}
