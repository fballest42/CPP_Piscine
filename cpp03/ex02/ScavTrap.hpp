/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:33:16 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 11:31:55 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
