/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:33:16 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 12:15:37 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_H
# define FRAPTRAP_H

# include"ClapTrap.hpp"

class FrapTrap : public ClapTrap
{
private:
	std::string		_Name;
	unsigned int	_Hitpoints;
	unsigned int	_Energy_points;
	unsigned int	_Attack_damage;
	
public:
	FrapTrap(void);
	FrapTrap(const FrapTrap &copy);
	FrapTrap(const std::string name);
	~FrapTrap(void);
	FrapTrap& operator=(const FrapTrap &equal);
	void highFivesGuys(void);
};

#endif
