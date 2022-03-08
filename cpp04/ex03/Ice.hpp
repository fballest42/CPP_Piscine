/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:18 by fballest          #+#    #+#             */
/*   Updated: 2022/03/08 11:01:20 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(std::string type);
		Ice(const Ice &copy);
		virtual ~Ice(void);
		Ice	&operator=(const Ice &equal);

		virtual	AMateria	*clone(void) const;
		void	use(ICharacter &target);
};

#endif