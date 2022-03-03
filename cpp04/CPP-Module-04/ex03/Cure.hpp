/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:27:34 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/20 12:58:11 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string type);
		Cure(const Cure &copy);
		~Cure(void);
		Cure	&operator=(const Cure &op);

		virtual AMateria	*clone(void) const;
		void 		use(ICharacter& target);
};

#endif