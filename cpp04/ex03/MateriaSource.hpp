/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSouce.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:55:37 by fballest          #+#    #+#             */
/*   Updated: 2022/03/07 15:03:02 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class   MateriaSource: public IMateriaSource
{
	private:
		bool    _iceSet;
		bool    _cureSet;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource   &operator=(const MateriaSource &equal);
		~MateriaSource(void);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};