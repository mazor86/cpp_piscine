/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:26:50 by mazor             #+#    #+#             */
/*   Updated: 2021/04/22 16:40:42 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::exit(void)
{
	std::cout << "THANKS FOR USING OUR PHONEBOOK :)" << std::endl;
	std::exit(0);
}

void	Phonebook::add(void)
{
	if (Contact::getNbContact() > 7)
		std::cout << "Phonebook is full. You can't add more then 8 contacts";
	else
		*(this->_contacts[Contact::getNbContact()]) = Contact();
	return ;
}

void	Phonebook::search(void)
{
	std::string	input;

	if (Contact::getNbContact() == 0)
	{
		std::cout << "Your phonebook is empty. Please ADD contacts before SEARCH" << std::endl;
		return ;
	}
	for (int i = 0; i < Contact::getNbContact(); i++)
		(*(this->_contacts[i])).printShortContact();
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
			(*(this->_contacts[input[0] - '0'])).printFullContact();
			break ;
		}
	}
	return ;
}