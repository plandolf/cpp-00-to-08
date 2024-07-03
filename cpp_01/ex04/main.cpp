/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:21:38 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/05 11:32:35 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed2.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Correct usage: ./sed2 \"inFile\" \"string to find\" \"string to replace\"" << std::endl;
		return (1);
	}
	Sed2		sed2(av[1]);
	sed2.ft_replace(av[2], av[3]);
	return (0);
}