/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:13:21 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 19:44:04 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int arraySize = 4;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize / 2; ++i)
        animals[i] = new Dog();
    for (int i = arraySize / 2; i < arraySize; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < arraySize; ++i)
        animals[i]->makeSound();

    for (int i = 0; i < arraySize; ++i)
        delete animals[i];

    return 0;
}