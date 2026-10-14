/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 15:27:16 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 16:09:50 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap default constructor called for " << Clap_name << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap parametrized constructor called for " << Clap_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << Clap_name << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << Clap_name << " says: Hey guys, positive high-fives all around!" << std::endl;
}
