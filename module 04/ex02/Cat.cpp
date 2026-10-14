/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:51:05 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 19:51:54 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	type = other.type;
	this->brain = new Brain(*(other.brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		this->type = other.type;
		*(this->brain) = *(other.brain);
	}
	std::cout << "Cat copy assigment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}