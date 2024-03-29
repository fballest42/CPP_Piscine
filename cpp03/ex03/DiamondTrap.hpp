/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:10:22 by fballest          #+#    #+#             */
/*   Updated: 2022/03/02 10:09:56 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include"FragTrap.hpp"
# include"ScavTrap.hpp"
# include"ClapTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap 
{
	private:
		std::string		_Name;
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(const std::string name);
		~DiamondTrap(void);
		DiamondTrap& operator=(const DiamondTrap &equal);

		std::string	getDiamondName(void) const;
		void		setDiamondName(std::string name);
		void 		whoAmI(void);
		void 		attack(std::string const &target);
};

#endif
