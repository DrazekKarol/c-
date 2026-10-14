/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:54:22 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 20:01:38 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	// j->makeSound();
	// i->makeSound();

	delete j;
	delete i;

	Cat originalCat;
	Cat copyCat(originalCat);

	Cat assignedCat;
	assignedCat = originalCat;
	return 0;
}