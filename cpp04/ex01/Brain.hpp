/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:05:49 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 11:34:18 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	public:
		std::string		idea[100];
		Brain(void);
		Brain(const Brain &copy);
		Brain& operator=(const Brain &equal);
		~Brain(void);
		
		std::string		*getIdeas(void) const;
		void			setIdeas(std::string ideas[100]);
};

#endif