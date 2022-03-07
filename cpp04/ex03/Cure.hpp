/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:12 by fballest          #+#    #+#             */
/*   Updated: 2022/03/07 13:09:10 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include <iostream>
#include <string>
#include <sys/types.h>
#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(std::string type);
		Cure(const Cure &copy);
		virtaul ~Cure(void);
		Cure	&operator=(const Cure &equal);

		virtual	AMateria	*clone(void) const;
		void	use(ICharacter &target);
};

#endif