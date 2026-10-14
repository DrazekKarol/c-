/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:59:03 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 17:49:01 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "Foo");
    if (horde) {
        for (int i = 0; i < N; i++) {
            horde[i].announce();
        }
        delete[] horde;
    }
    return 0;
}
