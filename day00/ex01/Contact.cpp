/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:02:02 by mazor             #+#    #+#             */
/*   Updated: 2021/04/27 11:44:19 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){};

Contact::~Contact(void){};

void	Contact::printShortContact()
{
	std::cout << std::setfill(' ') << std::setw(10); 
	std::cout << this->_index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->_personalDataContent[i].length() > FIELD_WIDTH)
			std::cout << this->_personalDataContent[i].substr(0, FIELD_WIDTH - 1) << ".";
		else
		{
			std::cout << std::setfill(' ') << std::setw(FIELD_WIDTH); 
			std::cout << this->_personalDataContent[i];
		}
	}
	std::cout << std::endl;
}

void	Contact::printFullContact()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << Contact::_personalDataTitle[i] << ": ";
		std::cout << this->_personalDataContent[i] << std::endl;
	}
}

void 	Contact::addContact(Contact list[])
{
	int index = Contact::getNbContact();

	if (index + 1 > MAX_CONTACT)
		std::cout << "Phonebook is full. You can't add more then 8 contacts";
	else
	{
		Contact::_nbContact += 1;
		list[index]._index = Contact::getNbContact();
		std::cout << "Please enter new contact's information" << std::endl;
		for (int i = 0; i < 11; i++)
		{
			std::cout << Contact::_personalDataTitle[i] << ": ";
			std::getline(std::cin, list[index]._personalDataContent[i]);
		}
	}
}

void 	Contact::searchContact(Contact list[])
{
	std::string	input;

	if (Contact::getNbContact() == 0)
	{
		std::cout << "Your phonebook is empty. Please ADD contacts before SEARCH" << std::endl;
		return ;
	}
	Contact::_printHeader();
	for (int i = 0; i < Contact::getNbContact(); i++)
		list[i].printShortContact();
	while(1)
	{
		std::cout << "Please enter the index of the contact you want to view: ";
		std::getline(std::cin, input);
		if (input.length() > 1 || !std::isdigit(input[0]) \
			|| (input[0] - '0') > Contact::getNbContact() || input[0] == '0')
		{
			std::cout << "WRONG INPUT" << std::endl;
			std::cout << "Please enter a number from 1 to " << Contact::getNbContact() << std::endl;
		}
		else
		{
			list[input[0] - '1'].printFullContact();
			break ;
		}
	}
}

int		Contact::getNbContact()
{
	return Contact::_nbContact;
}

void 	Contact::_printHeader()
{
	std::cout << std::endl;
	std::cout << std::setfill(' ') << std::setw(10) << "index";
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << Contact::_personalDataTitle[i];
	}
	std::cout << std::endl;
	for (int j = 0; j < 4; j++)
	{
		std::cout << std::setfill('_') << std::setw(10) << "";
		if (j < 3)
			std::cout << "|";
	}
	std::cout << std::endl;
}

int	Contact::_nbContact = 0;

const std::string Contact::_personalDataTitle[11] = { \
			"first name", "last name", "nickname", "login", \
			"postal address", "email address", "phone number", \
			"birthday date", "favorite meal", "underwear color", \
			"darkest secret"
		};