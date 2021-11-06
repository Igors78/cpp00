/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:23:49 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/06 17:31:17 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main(void)
{
	Phonebook phonebook;
	string cmd;

	while (true)
	{
		std::cout << "Enter the command:" << std::endl;
		if (!std::getline(std::cin, cmd))
			return (1);
		else if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else
			std::cout << "Command not found." << std::endl;
	}
	return (0);
}