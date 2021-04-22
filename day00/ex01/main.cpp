/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:30:07 by mazor             #+#    #+#             */
/*   Updated: 2021/04/22 16:57:38 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int		main(void)
{
	std::string		command;
	Contact			phonebook[8];

	while (1)
	{
		std::cout << "Please enter one of the following commands:" << std::endl;
		std::cout << "ADD     SEARCH     EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			Contact::addContact(phonebook);
		else if (command == "SEARCH")
			Contact::searchContact(phonebook);
		else if (command == "EXIT")
		{
			std::cout << "THANKS FOR USING OUR PHONEBOOK :)" << std::endl;
			break ;
		}
		else
			std::cout << "WRONG COMMAND!!!" << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
