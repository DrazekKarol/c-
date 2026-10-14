/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 18:06:54 by kdrazek           #+#    #+#             */
/*   Updated: 2026/07/29 18:19:44 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::truncate(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Contact::setContact(std::string first, std::string last,
				std::string nick, std::string phone,
				std::string darkest)
{
	this->firstName = first;
	this->lastName = last;
	this->nickname = nick;
	this->phoneNumber = phone;
	this->darkestSecret = darkest;
}

void Contact::displayTableRow(int index) const
{
	std::cout << "|" << std::setw(10) << std::right << index
			  << "|" << std::setw(10) << std::right << truncate(firstName)
			  << "|" << std::setw(10) << std::right << truncate(lastName)
			  << "|" << std::setw(10) << std::right << truncate(nickname)
			  << "|" << std::endl;
}

void Contact::displayDetails() const
{
	std::cout << "First Name    : " << firstName << std::endl;
	std::cout << "Last Name     : " << lastName << std::endl;
	std::cout << "Nickname      : " << nickname << std::endl;
	std::cout << "Phone Number  : " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}