/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:54:08 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 15:50:14 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor." << std::endl;
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout " RobotomyRequestForm destructor." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    std::cout << "RobotomyRequestForm copy constructor." << std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &equal)
{
    if (this == &equal)
        return (*this);
    this->_target = equal._target;
    return (*this);
}

void    RobotomyRequestForm::execute(const Bureaucrat &exec) const
{
    Form::execute(exec);
    std::cout << "drilling noises" << std::endl;
    std::cout << "drilling noises" << std::endl;
    std::cout << this->_target << " has been robotomized successfully 50% of time." << std::endl;
}
