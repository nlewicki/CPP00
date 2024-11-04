/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:56:44 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/04 12:58:11 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

std::string getInput(const std::string& prompt) {
    std::string input;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (!input.empty()) break;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
    return input;
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "EXIT") {
            break;
        }
        else if (command == "ADD") {
            Contact newContact;
            newContact.setContact(
                getInput("Enter first name: "),
                getInput("Enter last name: "),
                getInput("Enter nickname: "),
                getInput("Enter phone number: "),
                getInput("Enter darkest secret: ")
            );
            phoneBook.addContact(newContact);
            std::cout << "Contact added successfully!" << std::endl;
        }
        else if (command == "SEARCH") {
            phoneBook.searchContacts();
            std::cout << "\nEnter index to display: ";
            std::string indexStr;
            std::getline(std::cin, indexStr);
            try {
                int index = std::stoi(indexStr);
                phoneBook.displayContact(index);
            }
            catch (...) {
                std::cout << "Invalid index!" << std::endl;
            }
        }
    }

    return 0;
}
