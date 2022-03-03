/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:11:50 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 19:33:01 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _iceKnowledge(false), _cureKnoledge(false)
{
	//std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	this->_iceKnowledge = copy._iceKnowledge;
	this->_cureKnoledge = copy._cureKnoledge;
}

MateriaSource::~MateriaSource(void)
{
	//std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &op)
{
	if (this == &op)
		return *this;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m->getType() == "ice")
		this->_iceKnowledge = true;
	else if (m->getType() == "cure")
		this->_cureKnoledge = true;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "cure" && this->_cureKnoledge == true)
		return (new Cure());
	else if (type == "ice" && this->_iceKnowledge == true)
		return (new Ice());
	else
		return 0;
}
