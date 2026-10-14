/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:17:59 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 19:20:18 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}