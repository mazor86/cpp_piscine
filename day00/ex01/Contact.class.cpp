/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:02:02 by mazor             #+#    #+#             */
/*   Updated: 2021/04/21 17:03:25 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"



Contact::Contact(void)
{
	Contact::_nbContact += 1;
	this->_index = Contact::getNbContact();
	std::cout << "Please enter new contact's information" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << Contact::_personalDataTitle[i] << ": ";
		std::getline(std::cin, this->_personalDataContent[i]);

	}
	return ;
}

Contact::~Contact(void)
{
	Contact::_nbContact -= 1;
	return ;
}

void	Contact::printShortContact(void)
{
	std::cout << std::setfill(' ') << std::setw(10); 
	std::cout << this->_index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->_personalDataContent[i].length() > 10)
			std::cout << this->_personalDataContent[i].substr(0, 9) << ".";
		else
		{
			std::cout << std::setfill(' ') << std::setw(10); 
			std::cout<< this->_personalDataContent[i];
		}
	}
	std::cout << std::endl;
}
int		Contact::getNbContact(void)
{
	return Contact::_nbContact;
}

int	Contact::_nbContact = 0;

const std::string Contact::_personalDataTitle[11] = { \
			"first name", "last name", "nickname", "login", \
			"postal address", "email address", "phone number", \
			"birthday date", "favorite meal", "underwear color", \
			"darkest secret"
		};