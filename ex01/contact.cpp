/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:54:16 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/04 12:58:17 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {}

void Contact::setContact(const std::string& first, const std::string& last,
						const std::string& nick, const std::string& phone,
						const std::string& secret) {
	firstName = first;
	lastName = last;
	nickname = nick;
	phoneNumber = phone;
	darkestSecret = secret;
}
