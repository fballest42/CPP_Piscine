/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:59:46 by fballest          #+#    #+#             */
/*   Updated: 2022/01/24 13:25:54 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>
#include <cstdlib>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
public:
	Karen(void);
	~Karen(void);
	void	complain(std::string msg);
	void	(Karen::*funtion[5])(void);
	void	exit(void);
};

#endif
