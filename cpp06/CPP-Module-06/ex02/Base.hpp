/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD:cpp08/CPP-Module-08/ex00/easyfind.hpp
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:58:01 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/30 11:36:29 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>

template <class T>
void	easyfind(T &t, int n)
{
	if (std::find(t.begin(), t.end(), n) != t.end())
		std::cout << "Number " << n << " found" << std::endl;
	else
		throw 1;
}
=======
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:11:58 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/21 20:45:49 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base(void);
};

#endif
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex02/Base.hpp
