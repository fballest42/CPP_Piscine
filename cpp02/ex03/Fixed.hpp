/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:59:21 by fballest          #+#    #+#             */
/*   Updated: 2022/02/24 10:27:41 by fballest         ###   ########.fr       */
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
	Fixed(const Fixed &copy);
	Fixed(const int i);
	Fixed(const float flo);
	~Fixed(void);
	Fixed& operator=(const Fixed &fixed);
	
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator++(void);
	Fixed &operator--(void);

	int		getRawBits(void) const;
	void	setRawBits (int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static const Fixed &min(const Fixed &ca, const Fixed &cb);
	static const Fixed &max(const Fixed &ca, const Fixed &cb); 
};
std::ostream& operator<<(std::ostream &ret, Fixed const &newop);

#endif
