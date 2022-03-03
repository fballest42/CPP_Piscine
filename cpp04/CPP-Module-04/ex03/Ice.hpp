/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:27:39 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 13:01:21 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string type);
		Ice(const Ice &copy);
		~Ice(void);
		Ice	&operator=(const Ice &op);

		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};

#endif