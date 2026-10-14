/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:42:18 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/07 19:51:06 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		std::string type;
		Brain* brain;

	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		void makeSound() const;
};

#endif