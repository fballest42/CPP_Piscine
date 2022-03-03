/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:45:13 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 19:26:43 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		int			_equipedMateria;

	public:
		Character(void);
		Character(std::string name);
		Character(const Character &copy);
		virtual	~Character(void);
		Character	&operator=(const Character &op);
	
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};