/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:41:59 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 19:50:07 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;
	
	heapZombie = newZombie("Foo");
	heapZombie->announce();
	randomChump("Doo");
	delete	heapZombie;
	return (0);
}
