/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:30:50 by mazor             #+#    #+#             */
/*   Updated: 2021/04/19 10:13:34 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

void	get_loud(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		std::cout << (char)toupper(str[i]);
}

int		main(int ar, char **av)
{
	int		i;

	i = 1;
	if (ar > 1)
	{
		while (i < ar)
		{
			get_loud(av[i]);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}