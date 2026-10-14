/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:38:04 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 16:09:14 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap called default constructor for " << Clap_name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap called parametrized constructor for " << Clap_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap called copy constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap called copy assignment operator" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap called destructor for " << Clap_name << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (hit_points > 0 && energy_points > 0) {
        std::cout << "ScavTrap " << Clap_name << " ferociously attacks " << target
                  << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points--;
    } else {
        std::cout << "ScavTrap " << Clap_name << " is too weak to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Clap_name << " is now in Gate keeper mode!" << std::endl;
}