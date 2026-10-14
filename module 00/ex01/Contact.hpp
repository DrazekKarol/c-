/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:50:44 by kdrazek           #+#    #+#             */
/*   Updated: 2026/07/29 19:52:43 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		
		std::string truncate(std::string str) const;
	public:
		Contact();
		~Contact();

		void setContact(std::string first, std::string last,
						std::string nick, std::string phone,
						std::string darkest);
		void displayTableRow(int index) const;
		void displayDetails() const;
};


#endif