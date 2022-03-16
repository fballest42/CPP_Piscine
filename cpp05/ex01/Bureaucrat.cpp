/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:54:34 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 12:50:03 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor, named and graded." << std::endl;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
    std::cout << "Bureaucrat copy constructor." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &equal)
{
    std::cout << "Bureaucrat equal constructor." << std::endl;
    if (this == &equal)
        return (*this);
    this->_grade = equal.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor." << std::endl;
}

const std::string  Bureaucrat::getName(void) const
{
    return (this->_name);
}

int     Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void    Bureaucrat::signForm(Form &select)
{
    if (select.getSigned() == true)
        std::cout << this->_name << " coldn't sign " << select.getName() << ", it's signed yet." << std::endl;
    else
    {
        try
        {
            select.beSigned(*this);
            std::cout << this->_name << " signs " << select.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << this->_name << " cannot sign " << select.getName() << std::endl;
            std::cout << e.what() << std::endl;
        }
        
    }
}

void  Bureaucrat::gradeUpper(int add)
{
    if (this->getGrade() - add < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = this->_grade - add;
}

void  Bureaucrat::gradeLower(int add)
{
    if (this->getGrade() + add > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = this->_grade + add;
}

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &select)
{
    out << select.getName() << ", bureaucrat grade " << select.getGrade() << "." << std::endl;
    return (out);
}
