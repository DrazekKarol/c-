/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:16:58 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 16:38:22 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Clap_name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called for " << Clap_name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : Clap_name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap parametrized constructor called for " << Clap_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : Clap_name(other.Clap_name), hit_points(other.hit_points),
					energy_points(other.energy_points), attack_damage(other.attack_damage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
    {
		this->Clap_name = other.Clap_name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
	std::cout << "ClapTrap copy assigment operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << Clap_name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "ClapTrap " << Clap_name << " attacks " << target << ", cousing " << attack_damage << " points of damage!" << std::endl;
        energy_points--;
    }
    else
    {
        std::cout << "ClapTrap " << Clap_name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points >= amount)
    {
        hit_points -= amount;
    }
    else
    {
        hit_points = 0;
    }
    std::cout << "ClapTrap " << Clap_name << " takes " << amount << " points of damage! Hp left: " << hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points > 0 && energy_points > 0)
    {
        hit_points += amount;
        energy_points--;
        std::cout << "ClapTrap " << Clap_name << " repairs itself, gaining " << amount << " hit points! HP left: " << hit_points << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << Clap_name << " has no energy or hit points left to repair!" << std::endl;
    }
}