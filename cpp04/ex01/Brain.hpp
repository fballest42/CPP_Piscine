/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:05:49 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 15:12:59 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string		_ideas[100];

	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain(const std::string name);
		Brain& operator=(const Brain &equal);
		~Brain(void);
		
		void			setIdea(std::string idea);
		std::string 	getIdea(void) const;
};

#endif