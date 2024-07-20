/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:43:07 by clegros           #+#    #+#             */
/*   Updated: 2024/07/17 16:43:18 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

const	std::string& Contact::getFirstName() const
{
	return(this->firstname);
}

const	std::string& Contact::getLastName() const
{
	return(this->lastname);
}

const	std::string& Contact::getNickname() const
{
	return(this->nickname);
}

const	std::string& Contact::getPhoneNumber() const
{
	return(this->phonenumber);
}

const	std::string& Contact::getDarkestSecret() const
{
	return(this->darkestsecret);
}

void	Contact::setFirstName(std::string firstname)
{
	this->firstname = firstname;
}

void	Contact::setLastName(std::string lastname)
{
	this->lastname = lastname;
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phonenumber)
{
	this->phonenumber = phonenumber;
}

void	Contact::setDarkestSecret(std::string darkestsecret)
{
	this->darkestsecret = darkestsecret;
}
