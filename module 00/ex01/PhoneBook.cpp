/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:25:32 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 20:06:09 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0) {}

PhoneBook::~PhoneBook() {}

std::string PhoneBook::getValidInput(const std::string &prompt) const
{
	std::string input = "";
	while (input.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			return "";
		size_t start = input.find_first_not_of(" \t\n\r");
		if (start != std::string::npos)
		{
			size_t end = input.find_last_not_of(" \t\n\r");
			input = input.substr(start, end - start + 1);
		}
		else
			input.clear();
		if (input.empty())
			std::cout << "[Error] Field cannot be empty. Try again.\n";
	}
	return input;
}

void PhoneBook::addContact()
{
	std::string first = getValidInput("Enter First Name: ");
	if (std::cin.eof())
		return;
	std::string last = getValidInput("Enter Last Name: ");
	if (std::cin.eof())
		return;
	std::string nick = getValidInput("Enter Nickname: ");
	if (std::cin.eof())
		return;
	std::string phone = getValidInput("Enter Phone Number: ");
	if (std::cin.eof())
		return;
	std::string darkest = getValidInput("Enter Darkest Secret: ");
	if (std::cin.eof())
		return;
	contacts[oldestIndex].setContact(first, last, nick, phone, darkest);
	
	oldestIndex = (oldestIndex + 1) % 8;
	if (contactCount < 8)
		contactCount++;
	std::cout << "[Success] Contact added successfully!\n";
}

void PhoneBook::searchContacts() const
{
	if (contactCount == 0)
	{
		std::cout << "[Info] No contacts available to display.\n";
		return;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "|" << std::setw(10) << std::right << "Index"
			  << "|" << std::setw(10) << std::right << "First Name"
			  << "|" << std::setw(10) << std::right << "Last Name"
			  << "|" << std::setw(10) << std::right << "Nickname"
			  << "|\n";
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < contactCount; ++i)
		contacts[i].displayTableRow(i);
	std::cout << "---------------------------------------------\n";
	std::string input;
	std::cout << "Enter the index of the contact to view details: ";
	if (!std::getline(std::cin, input))
		return;
	if (input.length() == 1 && input[0] >= '0' && input[0] < ('0' + contactCount))
	{
		int index = input[0] - '0';
		contacts[index].displayDetails();
	}
	else
		std::cout << "[Error] Invalid index. \n";
}