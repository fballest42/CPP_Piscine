/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:54:50 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 15:52:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardomForm : public Form
{
    public:
        PresidentialPardomForm(std::string target);
        virtual ~PresidentialPardomForm(void);
        PresidentialPardomForm(const PresidentialPardomForm &copy);
        PresidentialPardomForm &operator=(const PresidentialPardomForm &equal);

        void    execute(const Bureaucrat exec) const;
}