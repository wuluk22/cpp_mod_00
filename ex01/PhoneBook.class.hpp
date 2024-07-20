/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:44:00 by clegros           #+#    #+#             */
/*   Updated: 2024/07/17 16:44:01 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int	oldestIndex;
		int	contactCount;
	public:
		PhoneBook();
		void addContact(const Contact &contact);
		void displayContacts() const;
		void displayContactDetails(int index) const;
		int getContactCount() const;
};

#endif
