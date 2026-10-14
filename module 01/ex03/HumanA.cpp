/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:50:15 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 18:03:31 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : humana_name(name), humana_weapon(weapon) {}
HumanA::~HumanA() {}

void HumanA::attack(void) const
{
	std::cout << humana_name << " attacks with their " << humana_weapon.getType() << std::endl;
}
