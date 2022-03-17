/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:13:21 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 19:20:16 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op)
{
	if (&op == this)
		return *this;
	this->_target = op._target;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "* Drilling noises *" << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
}
