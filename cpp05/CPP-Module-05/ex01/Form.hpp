/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 09:44:03 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 12:01:25 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		virtual ~Form(void);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;

		void	beSigned(Bureaucrat &bureaucrat);

		class	GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The form grade was too high";
			}
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The form grade was too low";
			}
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &instance);

#endif
