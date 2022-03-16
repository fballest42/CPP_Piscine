/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:52:45 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 15:35:44 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form ("ShrubberyForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor." << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm copy constructor." << std::ednl;
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &equal)
{
	if (this == &equal)
		return (*this);
	this->_target = equal._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &exec)
{
	Form::execute(exec);
	std::fstream file;
	
	file.open(this->target + "_shrubbery", std::fstream);
	if (file.is_open())
	{
		file << "    888" << std::endl;
		file << "    888"  << std::endl;
		file << "    888" << std::endl;
		file << "    888888888d888 .d88b.  .d88b." << std::endl;
		file << "    888   888P'  d8P  Y8bd8P  Y8b" << std::endl;
		file << "    888   888    8888888888888888" << std::endl;
		file << "    Y88b. 888    Y8b.    Y8b.      oo" << std::endl;
		file << "     'Y888888     'Y888   'Y888    oo" << std::endl;
		file << "                                     " << std::ednl;
		file << "                      ___" << std::endl;
		file << "                _,-'''   ''''`--." << std::endl;
		file << "             ,-''         __,,-- ." << std::endl;
		file << "           ,'    __,--''''dF      )" << std::endl;
		file << "          /   .-'Hb_,--''dF      /" << std::endl;
		file << "        ,'       _Hb ___dF'-._,-'" << std::endl;
		file << "      ,'      _,-''''   ''--..__" << std::endl;
		file << "     (     ,-'                  `." << std::endl;
		file << "      `._,'     _   _             ;" << std::endl;
		file << "       ('     ,' '-'Hb-.___..._,-'" << std::endl;
		file << "      	|   ,''Hb.-'HH`-.dHF" << std::endl;
		file << "        `--'   'Hb  HH  dF" << std::endl;
		file << "                'Hb HH dF" << std::endl;
		file << "                 'HbHHdF" << std::endl;
		file << "                  |HHHF" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  dHHHb" << std::endl;
		file << "                .dFd|bHb.               o" << std::endl;
		file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
		file << "   Y  |   __,dHHFdHH|HHhoHHb.__       Y" << std::endl;
		file << "##########################################" << std::endl;
		file.close();
 	}
}

