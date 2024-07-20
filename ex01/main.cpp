/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:44:10 by clegros           #+#    #+#             */
/*   Updated: 2024/07/17 16:44:12 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#define VALID "\033[32m"
#define MEOW "\033[35m"
#define UNVALID "\033[31m"
#define UNDER "\033[4m"
#define STOP "\033[0m"

int getValidIndex(int maxIndex)
{
    std::string input;
    int index = -1;

    while (true)
	{
        std::getline(std::cin, input);
        try
		{
            index = std::stoi(input);
            if (index >= 0 && index < maxIndex)
			{
                break;
            }
			else
			{
                std::cout << UNVALID << "Invalid index! Please enter a number between 0 and " << maxIndex - 1 << ": " << STOP;
            }
        }
		catch (const std::invalid_argument&)
		{
            std::cout << UNVALID << "Invalid input! Please enter a valid number: " << STOP;
        }
		catch (const std::out_of_range&)
		{
            std::cout << UNVALID << "Number out of range! Please enter a valid number: " << STOP;
        }
    }
    return index;
}

void addInput(PhoneBook &phonebook)
{
	Contact	contact;
	std::string	input;
	std::cout << VALID << "Enter info about the new contact" << STOP << std::endl;
	do
	{
		std::cout << MEOW << "first name :" << STOP;
		std::getline(std::cin, input);
		if (!input.empty())
		{
			contact.setFirstName(input);
			break ;
		}
		std::cout << "please enter a valid first name" << std::endl;
	} while (true);
	do
	{
		std::cout << MEOW << "last name :" << STOP;
		std::getline(std::cin, input);
		if (!input.empty())
		{
			contact.setLastName(input);
			break ;
		}
		std::cout << "please enter a valid last name" << std::endl;
	} while (true);
	do
	{
		std::cout << MEOW << "nickname :" << STOP;
		std::getline(std::cin, input);
		if (!input.empty())
		{
			contact.setNickname(input);
			break ;
		}
		std::cout << "please enter a valid nickname" << std::endl;
	} while (true);
	do
	{
		std::cout << MEOW << "phone number :" << STOP;
		std::getline(std::cin, input);
		if (!input.empty())
		{
			contact.setPhoneNumber(input);
			break ;
		}
		std::cout << "please enter a valid number" << std::endl;
	} while (true);
	do
	{
		std::cout << MEOW << "darkest secret :" << STOP;
		std::getline(std::cin, input);
		if (!input.empty())
		{
			contact.setDarkestSecret(input);
			break ;
		}
		std::cout << "please enter a valid secret" << std::endl;
	} while (true);
	phonebook.addContact(contact);
}

int main()
{
	PhoneBook 	phonebook;
	int			index;
	std::string	input;
	while(1)
	{
		std::cout << MEOW << UNDER << "Phonebook :" << STOP << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			addInput(phonebook);
		}
		else if (input == "SEARCH")
		{
		 	phonebook.displayContacts();
            		if (phonebook.getContactCount() > 0)
					{
                		std::cout << MEOW << "Enter index for more details: " << STOP;
                		index = getValidIndex(phonebook.getContactCount());
						std::cout << std::endl;
                		phonebook.displayContactDetails(index);
            		}
					else
					{
                		std::cout << UNVALID << "No contacts available." << STOP << std::endl;
            		}
		}
		else if (input == "EXIT")
			break ;
		else
			std::cerr << UNVALID << "bad input" << STOP << std::endl;
	}
	return 0;
}
