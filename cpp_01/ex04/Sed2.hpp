/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:20:17 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/05 11:28:49 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED2_HPP
#define SED2_HPP

# include <iostream>
# include <fstream>

class Sed2
{
	private:
		std::string _inFile;
		std::string _outFile;
	public:
		Sed2(std::string filename);
		~Sed2();
		void	ft_replace(std::string s1, std::string s2);
};

#endif