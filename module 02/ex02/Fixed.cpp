/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 19:03:30 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/06 19:39:37 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0) {}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int n)
{
	this->fixed_point_value = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
	this->fixed_point_value = static_cast<int>(roundf(n * (1 << fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->fixed_point_value = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() {}

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

bool Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->fixed_point_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->fixed_point_value += 1;
	return (temp);
}

Fixed &Fixed::operator--(void)
{
	this->fixed_point_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	this->fixed_point_value -= 1;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}