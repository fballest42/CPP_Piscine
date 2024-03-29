/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:33:16 by fballest          #+#    #+#             */
/*   Updated: 2022/03/02 11:29:06 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include"ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{	
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap(const std::string name);
		~ScavTrap(void);
		ScavTrap& operator=(const ScavTrap &equal);
		void attack(std::string const & target);
		void guardGate(void);
};

#endif
