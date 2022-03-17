/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 09:44:03 by rcabezas          #+#    #+#             */
/*   Updated: 2022/03/17 11:47:18 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	protected:
		std::string	_target;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		virtual ~Form(void);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;

		void	beSigned(Bureaucrat &bureaucrat);

		virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class	NotSignedException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The form is not signed";
			}
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &instance);
