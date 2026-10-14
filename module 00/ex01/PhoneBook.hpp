/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:21:37 by kdrazek           #+#    #+#             */
/*   Updated: 2026/07/29 19:52:45 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactCount;
		int oldestIndex;

		std::string getValidInput(const std::string &prompt) const;
		
	public:
		PhoneBook();
		~PhoneBook();

		void addContact();
		void searchContacts() const;
		
};
#endif