/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 19:25:40 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/28 19:47:34 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <exception>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &copy);
		~Intern(void);
		Intern	&operator=(const Intern &op);

		Form	*makeForm(std::string form, std::string target) const;

		class	UnknownFormException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Intern wasn't able to create that function";
			}
		};
};
