/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:42:48 by clegros           #+#    #+#             */
/*   Updated: 2024/07/17 16:42:50 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toUpper(char **str)
{
	int	i;

	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] > 96 && (*str)[i] < 123)
			(*str)[i] -= 32;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i])
		{
			toUpper(&av[i]);
			std::cout << av[i++];
		}
		std::cout << std::endl;
	}
	return (0);
}
