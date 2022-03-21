/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:39:14 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/21 13:00:54 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>

class	Convert
{
	private:
		int				_integer;
		float			_floater;
		std::string 	_character;
		double			_dbl;

	public:
		Convert(void);
		Convert(char *arg);
		Convert(const Convert &copy);
		~Convert(void);
		Convert	&operator=(const Convert &op);

		void	displayAtributes(void);
};

#endif