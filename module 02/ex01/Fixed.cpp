/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:55:39 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/06 19:13:35 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = static_cast<int>(roundf(n * (1 << fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->fixed_point_value = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const bits)
{
	this->fixed_point_value = bits;
}

int Fixed::toInt(void) const
{
	return (this->fixed_point_value >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_point_value) / (1 << fractionalBits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}