/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:05:56 by fballest          #+#    #+#             */
/*   Updated: 2022/03/08 11:26:07 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _iceSet(false), _cureSet(false)
{
	// std::cout << "MateriaSource default consturctor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	// std::cout << "MateriaSource copy consturctor called." << std::endl;
	this->_iceSet = copy._iceSet;
	this->_cureSet = copy._cureSet;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &equal)
{
	// std::cout << "MateriaSource equal consturctor called." << std::endl;
	if (this == &equal)
		return (*this);
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	// std::cout << "Default destructor MateriaSource called." << std::endl;
}

void		MateriaSource::learnMateria(AMateria *lm)
{
	if (lm->getType() == "ice")
		this->_iceSet = true;
	else if (lm->getType() == "cure")
		this->_cureSet = true;
	delete lm;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (type == "cure" && this->_cureSet == true)
		return (new Cure());
	else if (type == "ice" && this->_iceSet == true)
		return (new Ice());
	else
		return 0;
}
