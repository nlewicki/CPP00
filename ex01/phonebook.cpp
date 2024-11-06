/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:01:39 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/06 11:07:34 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

void PhoneBook::addContact(const Contact& contact)
{
	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % 8;
	if (contactCount < 8) contactCount++;
}

std::string PhoneBook::truncateString(const std::string& str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::searchContacts() const
{
	if (contactCount == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}

	std::cout << "|" << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::string(44, '-') << std::endl;

	for (int i = 0; i < contactCount; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|"
					<< std::setw(10) << truncateString(contacts[i].getFirstName()) << "|"
					<< std::setw(10) << truncateString(contacts[i].getLastName()) << "|"
					<< std::setw(10) << truncateString(contacts[i].getNickname()) << "|" << std::endl;
	}
}

void PhoneBook::displayContact(int index) const
{
	if (index < 0 || index >= contactCount)
	{
		std::cout << "Invalid index!" << std::endl;
		return;
	}

	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
