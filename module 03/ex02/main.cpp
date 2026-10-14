/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:17:07 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 16:23:02 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
	FragTrap wokulski("Wokulski");
	FragTrap izabela("Izabela");
	FragTrap zecki(wokulski);
	FragTrap starski("Starski");
	starski = izabela;
	
	std::cout << "\n" << std::endl;
	wokulski.attack("izabela");
	izabela.takeDamage(30);
	izabela.beRepaired(5);

	izabela.attack("wokulski");
	wokulski.takeDamage(30);
	wokulski.beRepaired(5);

	zecki.attack("izabela");
	starski.attack("wokulski");
	
	wokulski.attack("izabela");
	izabela.takeDamage(30);
	izabela.beRepaired(5);

	std::cout << "\n" << std::endl;
	wokulski.highFivesGuys();
	izabela.highFivesGuys();
	zecki.highFivesGuys();
	starski.highFivesGuys();

	return (0);
}