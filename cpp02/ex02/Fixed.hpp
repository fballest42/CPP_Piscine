/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:59:21 by fballest          #+#    #+#             */
/*   Updated: 2022/01/26 12:36:20 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					_num;
	static const int	_snum = 8;
public:
	Fixed(void);
	Fixed(Fixed const &copy);
	Fixed(const int i);
	Fixed(const float flo);
	Fixed& operator=(Fixed const &fixed);
	bool operator>(Fixed const &fixed);
	bool operator<(Fixed const &fixed);
	bool operator>=(Fixed const &fixed);
	bool operator<=(Fixed const &fixed);
	bool operator==(Fixed const &fixed);
	bool operator!=(Fixed const &fixed);
	Fixed& operator+(Fixed const &fixed);
	Fixed& operator-(Fixed const &fixed);
	Fixed& operator*(Fixed const &fixed);
	Fixed& operator/(Fixed const &fixed);
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator++(void);
	Fixed &operator--(void);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits (int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};
std::ostream& operator<<(std::ostream &ret, Fixed const &newop);

#endif
