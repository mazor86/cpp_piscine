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
#include "Phonebook.class.hpp"

int		main(void)
{
	std::string	command;
	Phonebook	book;

	while (1)
	{
		std::cout << "Number of contacts = " << Contact::getNbContact() << std::endl;
		std::cout << "Please enter one of the following commands:" << std::endl;
		std::cout << "ADD     SEARCH     EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else if (command == "EXIT")
			book.exit();
		else
			std::cout << "WRONG COMMAND!!!" << std::endl;
	}
	return (0);
}