/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:18 by fballest          #+#    #+#             */
/*   Updated: 2022/03/07 14:19:56 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include <iostream>
#include <string>
#include <sys/types.h>
#include "ICharacter.hpp"

class Ice
{
		Ice(void);
		Ice(std::string type);
		Ice(const Ice &copy);
		virtaul ~Ice(void);
		Ice	&operator=(const Ice &equal);

		virtual	AMateria	*clone(void) const;
		void	use(ICharacter &target);
};

#endif