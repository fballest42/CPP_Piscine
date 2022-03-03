/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:04:23 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 17:44:58 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		bool	_iceKnowledge;
		bool	_cureKnoledge;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &op);

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};