/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:17:07 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 16:38:16 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap wokulski("Wokulski");
	ClapTrap izabela("Izabela");
	ClapTrap zecki(wokulski);
	ClapTrap starski("Starski");

	starski = izabela;
	wokulski.attack("izabela");
	izabela.takeDamage(0);
	izabela.beRepaired(2);

	izabela.attack("wokulski");
	wokulski.takeDamage(0);
	wokulski.beRepaired(2);
	zecki.attack("izabela");
	starski.attack("wokulski");

	return (0);
}