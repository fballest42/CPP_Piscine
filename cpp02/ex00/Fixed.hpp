/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:59:21 by fballest          #+#    #+#             */
/*   Updated: 2022/01/24 15:02:06 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
	/* data */
public:
	Fixed(void);
	Fixed(Fixed const &);
	Fixed& operator=(Fixed const &);
	~Fixed(void);
};
