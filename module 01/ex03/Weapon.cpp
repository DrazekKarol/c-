/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:54:24 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 18:07:48 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : wepon_type(type) {}
Weapon::~Weapon() {}

const std::string& Weapon::getType(void) const
{
	return wepon_type;
}

void Weapon::setType(std::string type)
{
	wepon_type = type;
}
