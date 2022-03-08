/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:33:05 by fballest          #+#    #+#             */
/*   Updated: 2022/03/08 11:16:15 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class   Character: public ICharacter
{
	private:
		std::string _name;
		AMateria    *_inventory[4];
		int         _equiped;

	public:
		Character(void);
		Character(std::string name);
		Character(const Character &copy);
		~Character(void);
		Character &operator=(const Character &equal);

		std::string		const &getName() const;
		void			equip(AMateria* lm);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
};