/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:12 by fballest          #+#    #+#             */
/*   Updated: 2022/03/08 11:01:25 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(std::string type);
		Cure(const Cure &copy);
		virtual ~Cure(void);
		Cure	&operator=(const Cure &equal);

		virtual	AMateria	*clone(void) const;
		void	use(ICharacter &target);
};

#endif