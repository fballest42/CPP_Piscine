/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:54:50 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 16:00:00 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardomForm::PresidentialPardomForm(std::string target) : Form("PresidentialForm", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor." << std::endl;
}

PresidentialPardomForm::~PresidentialPardomForm(void)
{
    std::cout << "PresidentialPardonForm destructor." << std::endl;
}

PresidentialPardomForm::PresidentialPardomForm(const PresidentialPardomForm &copy)
{
    std::cout << "PresidentialPardonForm copy constructor." << std:.endl;
    *this = copy;
}

PresidentialPardomForm &PresidentialPardomForm::operator=(const PresidentialPardomForm &equal)
{
    if (this == &equal)
        return (*this);
    this->_target = equal._target;
    return (*this);
}

void    PresidentialPardomForm::execute(const Bureaucrat &exec) const
{
    Form::execute(exec);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
