/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:01:53 by mazor             #+#    #+#             */
/*   Updated: 2021/04/22 13:44:51 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void		printShortContact(void);
		void		printFullContact(void);
		
		static int	getNbContact(void);
		static void	addContact(Contact list[]);
		static void searchContact(Contact list[]);

	private:
		std::string _personalDataContent[11];
		int			_index;

		static const std::string	_personalDataTitle[11];
		static int	_nbContact;

		static void _printHeader(void);
};
#endif