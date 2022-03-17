/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:23:20 by fballest          #+#    #+#             */
/*   Updated: 2022/03/17 13:30:44 by fballest         ###   ########.fr       */
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
		Intern  &operator=(const Intern &equal);

		Form	*makeForm(std::string form, std::string target) const;
		
		class	NonFormException : public std::exception
		{
			virtual const char * what() const throw();
			{
				return ("Your Form is unknown for me.");
			}
		};
};