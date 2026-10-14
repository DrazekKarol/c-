/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:52:58 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 18:04:07 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* humanb_weapon;

	public:
		HumanB(std::string name);
		~HumanB();

	void setWeapon(Weapon& weapon);
	void attack(void) const;
};

#endif
