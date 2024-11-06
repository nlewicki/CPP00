/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:48:47 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/06 11:08:16 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {
private:
	Contact contacts[8];
	int currentIndex;
	int contactCount;
	std::string truncateString(const std::string& str) const;

public:
	PhoneBook();
	void addContact(const Contact& contact);
	void searchContacts() const;
	void displayContact(int index) const;
};

#endif
