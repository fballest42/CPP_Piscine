/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 09:02:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 12:01:10 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
		std::string		_name;
		int	_grade;

	public:
		Bureaucrat(const std::string name, int level);
		Bureaucrat(const Bureaucrat &copy);
		virtual	~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &op);

		const std::string		getName(void) const;
		int			getGrade(void) const;

		void	increaseGrade(int increment);
		void	decreaseGrade(int decrement);

		void	signForm(Form &form);

		class	GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The bureaucrat grade was too high";
			}
		};

		class	GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "The bureaucrat grade was too low";
			}
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &instance);

#endif
