/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:03:36 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 17:49:48 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : zombie_name("") {}

Zombie::Zombie(std::string name) : zombie_name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << zombie_name << " destroyed." << std::endl;
}

void Zombie::announce(void) const {
    std::cout << zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    zombie_name = name;
}
