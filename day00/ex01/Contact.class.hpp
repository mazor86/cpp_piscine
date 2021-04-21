/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:01:53 by mazor             #+#    #+#             */
/*   Updated: 2021/04/21 16:43:41 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void		printShortContact(void);
		
		static int	getNbContact(void);
		static void	printPhoneBook(Contact *first);

	private:
		std::string _personalDataContent[11];
		int			_index;

		static const std::string	_personalDataTitle[11];
		static int	_nbContact;
};
#endif