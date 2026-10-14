/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:02:23 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 17:49:55 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
private:
    std::string zombie_name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void) const;
    void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
