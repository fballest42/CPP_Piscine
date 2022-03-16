/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:52:45 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 13:00:46 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &equal);

        void    execute(const Bureaucrat &exec) const;
}