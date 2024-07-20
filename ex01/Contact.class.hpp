/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:43:31 by clegros           #+#    #+#             */
/*   Updated: 2024/07/17 16:43:33 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;

	public:
		const std::string&	getFirstName(void) 	const;
		const std::string&	getLastName(void)		const;
		const std::string&	getNickname(void)		const;
		const std::string&	getPhoneNumber(void)	const;
		const std::string&	getDarkestSecret(void)	const;
		void	setFirstName(std::string firstname);
		void	setLastName(std::string lastname);
		void	setNickname(std::string nickname);
		void	setPhoneNumber(std::string phonenumber);
		void	setDarkestSecret(std::string darkestsecret);
};

#endif
