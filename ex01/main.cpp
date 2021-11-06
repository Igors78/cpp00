/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:23:49 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/06 20:56:29 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

using std::string;

int main(void)
{
	Phonebook book;
	string cmd;

	while (true)
	{
		std::cout << "Enter command:" << std::endl;
		if (!std::getline(std::cin, cmd))
			std::exit(1);
		else if (cmd == "EXIT")
			std::exit(0);
		else if (cmd == "ADD")
			book.addcont();
		else if (cmd == "SEARCH")
			book.getcont();
		else
			std::cout << "ADD, SEARCH or EXIT" << std::endl;
		cmd.clear();
		std::cin.clear();
	}
	return (0);
}