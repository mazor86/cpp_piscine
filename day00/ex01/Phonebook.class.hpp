/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:25:49 by mazor             #+#    #+#             */
/*   Updated: 2021/04/22 16:34:21 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		
		void	exit(void);
		void	add(void);
		void	search(void);

	private:
		Contact *_contacts[8];
};
#endif