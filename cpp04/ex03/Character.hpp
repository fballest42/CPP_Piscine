/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:33:05 by fballest          #+#    #+#             */
/*   Updated: 2022/03/07 14:54:40 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

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

		std::string		const &getName(void) const;
		void			equip(AMateria *m);
		void			unequip(int idx);
		void			use(int indx, ICharacter &target);
};