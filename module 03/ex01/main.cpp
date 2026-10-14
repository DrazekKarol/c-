/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:17:07 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 16:21:09 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap wokulski("Wokulski");
	ScavTrap izabela("Izabela");
	ScavTrap zecki(wokulski);
	ScavTrap starski("Starski");
	starski = izabela;
	
	std::cout << "\n" << std::endl;
	wokulski.attack("izabela");
	izabela.takeDamage(20);
	izabela.beRepaired(5);

	izabela.attack("wokulski");
	wokulski.takeDamage(20);
	wokulski.beRepaired(5);

	zecki.attack("izabela");
	starski.attack("wokulski");
	
	wokulski.attack("izabela");
	izabela.takeDamage(20);
	izabela.beRepaired(5);


	std::cout << "\n" << std::endl;
	wokulski.guardGate();
	izabela.guardGate();
	zecki.guardGate();
	starski.guardGate();

	return (0);
}