/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:39:00 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/06 15:57:54 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int	fixed_point_value;
		static const int	fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int n);
		Fixed(const float n);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream& os, const Fixed& obj);

#endif