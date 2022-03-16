/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:36:56 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 16:13:02 by fballest         ###   ########.fr       */
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
	protected:
		std::string			_target;
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradesigner;
		const int			_gradeexecuter;
	public:
		Form(void);
		Form(std::string name, int gradesigner, int gradeexecuter);
		Form(const Form &copy);
		virtual ~Form(void);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeSigner(void) const;
		int					getGradeExecuter(void) const;

		void		beSigned(Bureaucrat &bureaucrat);

		virtual void	execute(Bureacrat const &exec) cost = 0;

		class		GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("The form grade requiered is Higher");
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("The form grade requiered is Lower");
			}
		};
};
std::ostream	&operator<<(std::ostream &out, const Form &select);

#endif
