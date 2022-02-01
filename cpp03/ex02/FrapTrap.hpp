/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:01:58 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 11:50:53 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAP_TRAP_H
# define FRAP_TRAP_H

#include <iostream>
#include <string>
#include <cmath>

class FrapTrap
{
	private:
		std::string		_Name;
		unsigned int	_Hitpoints;
		unsigned int	_Energy_points;
		unsigned int	_Attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &copy);
		ClapTrap(const std::string name);
		ClapTrap& operator=(const ClapTrap &equal);
		~ClapTrap(void);
		void setName(std::string name);
		std::string getName(void) const;
		void setHitpoint(unsigned int hitpoints);
		unsigned int getHitpoint(void) const;
		void setEnergy(unsigned int energy);
		unsigned int getEnergy(void) const;
		void setDamage(unsigned int damage);
		unsigned int getDamage(void) const;
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif