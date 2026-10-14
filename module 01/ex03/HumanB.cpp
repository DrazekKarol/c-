/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:52:31 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 18:03:28 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), humanb_weapon(NULL) {}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
	humanb_weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (humanb_weapon)
		std::cout << _name << " attacks with their " << humanb_weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their bare hands!" << std::endl;
}
