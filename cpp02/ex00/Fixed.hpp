/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:59:21 by fballest          #+#    #+#             */
/*   Updated: 2022/01/24 15:54:27 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>


class Fixed
{
private:
	int					_num;
	static const int	_snum;
public:
	Fixed(void);
	Fixed(Fixed const &);
	Fixed& operator=(Fixed const &);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits (int const raw);
};

#endif
