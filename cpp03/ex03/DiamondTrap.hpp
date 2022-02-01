/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:10:22 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 14:07:20 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_H
# define FRAPTRAP_H

# include"FragTrap.hpp"
# include"ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap 
{
private:
	std::string		_Name;
	unsigned int	_Hitpoints;
	unsigned int	_Energy_points;
	unsigned int	_Attack_damage;
	unsigned int	_attack;
	
public:
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap(const std::string name);
	~DiamondTrap(void);
	DiamondTrap& operator=(const DiamondTrap &equal);
	void whoAmI(void);
};

#endif
