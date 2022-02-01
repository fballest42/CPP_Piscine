/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:33:16 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 13:35:46 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_H
# define FRAPTRAP_H

# include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string		_Name;
	unsigned int	_Hitpoints;
	unsigned int	_Energy_points;
	unsigned int	_Attack_damage;
	
public:
	FragTrap(void);
	FragTrap(const FragTrap &copy);
	FragTrap(const std::string name);
	~FragTrap(void);
	FragTrap& operator=(const FragTrap &equal);
	void highFivesGuys(void);
};

#endif
