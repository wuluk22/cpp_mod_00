/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:43:50 by clegros           #+#    #+#             */
/*   Updated: 2024/07/17 16:43:52 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"
#define VALID "\033[32m"
#define MEOW "\033[35m"
#define UNVALID "\033[31m"
#define STOP "\033[0m"

PhoneBook::PhoneBook() : oldestIndex(0), contactCount(0) {}

void	PhoneBook::addContact(const Contact &contact)
{
	if (contactCount < 8)
	{
		contacts[contactCount] = contact;
		contactCount++;
	}
	else
	{
		contacts[oldestIndex] = contact;
		oldestIndex = (oldestIndex + 1) % 8;
	}
    std::cout << VALID << "Contact added successfully" << STOP << std::endl;
}

void truncateAndPrint(const std::string &str)
{
    if (str.length() > 10)
    {
        std::cout << str.substr(0, 9) + ".";
    }
    else
    {
        std::cout << std::setw(10) << str;
    }
}

void PhoneBook::displayContacts() const
{
    int i = 0;
    std::cout << std::setw(10) << "Index" << " | " << std::setw(10) << "First Name" << " | " << std::setw(10) << "Last Name" << " | " << std::setw(10) << "Nickname" << std::endl;
    while (i < contactCount)
    {
        std::cout << std::setw(10) << i << " | ";
        truncateAndPrint(contacts[i].getFirstName());
        std::cout << " | ";
        truncateAndPrint(contacts[i].getLastName());
        std::cout << " | ";
        truncateAndPrint(contacts[i].getNickname());
        std::cout << std::endl;
        i++;
    }
}


void PhoneBook::displayContactDetails(int index) const
{
    if (index >= 0 && index < contactCount)
    {
        std::cout << MEOW << "First Name: " << STOP << contacts[index].getFirstName() << std::endl;
        std::cout << MEOW << "Last Name: " << STOP << contacts[index].getLastName() << std::endl;
        std::cout << MEOW << "Nickname: " << STOP << contacts[index].getNickname() << std::endl;
        std::cout << MEOW << "Phone Number: " << STOP << contacts[index].getPhoneNumber() << std::endl;
        std::cout << MEOW << "Darkest Secret: " << STOP << contacts[index].getDarkestSecret() << std::endl << std::endl;
    }
    else
    {
        std::cout << "Invalid index!" << std::endl;
    }
}

int PhoneBook::getContactCount() const
{
	return (contactCount);
}
