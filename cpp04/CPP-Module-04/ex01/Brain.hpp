/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:46:26 by rcabezas          #+#    #+#             */
/*   Updated: 2022/03/04 11:29:26 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		std::string	idea[100];

		Brain(void);
		Brain(const Brain &copy);
		virtual ~Brain(void);
		Brain	&operator=(const Brain &op);

		std::string *getIdeas(void) const;
		void		setIdeas(std::string idea[100]);
};

#endif
