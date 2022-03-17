/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:56:19 by fballest          #+#    #+#             */
/*   Updated: 2022/03/17 12:15:10 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		std::string			_name;
		int					_grade;
		
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &equal);
		virtual~Bureaucrat();

		const std::string	getName(void) const;
		int		getGrade(void) const;

		void	gradeUpper(int add);
		void	gradeLower(int add);

		void	signForm(Form &select);
		void	executeForm(Form const &form);

		class GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Grade is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Grade is too low.");
			}
		};
};    		
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &select);

#endif
