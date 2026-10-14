/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:46:14 by kdrazek           #+#    #+#             */
/*   Updated: 2026/07/29 19:50:01 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	std::cout << "Welcome to Awesome PhoneBook 80s Edition!\n";
	std::cout << "Available commands: ADD, SEARCH, EXIT\n";

	while (true)
	{
		std::cout << "\n";
		if (!std::getline(std::cin, command))
			break;

		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		else if (!command.empty())
		{
			
		}
	}
	return (0);
}