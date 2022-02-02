/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:33:16 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 13:22:36 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{	
	public:
		FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap(const std::string name);
		~FragTrap(void);
		FragTrap& operator=(const FragTrap &equal);
		void highFivesGuys(void);
};

#endif
