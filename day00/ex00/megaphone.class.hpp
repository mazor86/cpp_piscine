/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 21:39:52 by mazor             #+#    #+#             */
/*   Updated: 2021/04/15 21:55:17 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_CLASS_HPP
# define MEGAPHONE_CLASS_HPP

# include <string>

class Megaphone 
{
	Megaphone(void);
	~Megaphone(void);

	static void capsLock(std::string);
};
#endif