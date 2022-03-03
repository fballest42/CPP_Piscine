/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:46:26 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/23 11:00:29 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		std::string	ideas[100];

		Brain(void);
		Brain(const Brain &copy);
		virtual ~Brain(void);
		Brain	&operator=(const Brain &op);

		std::string *getIdeas(void) const;
		void		setIdeas(std::string ideas[100]);
};

#endif
