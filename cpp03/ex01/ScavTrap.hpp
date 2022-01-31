/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:33:16 by fballest          #+#    #+#             */
/*   Updated: 2022/01/31 14:14:43 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string		_Name;
	unsigned int	_Hitpoints;
	unsigned int	_Energy_points;
	unsigned int	_Attack_damage;
	
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
