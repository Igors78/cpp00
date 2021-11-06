/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:28:54 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/06 22:17:23 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	this->size = 0;
}

Phonebook::~Phonebook(void)
{
}

void Phonebook::putcont()
{
	int i;
	std::cout << "Enter number of contact";
	std::cin >> i;
	if (std::cin.fail() || i <= 0 || i > this->size)
	{
		std::cin.clear();
		std::cout << "Wrong input" << std::endl;
		return;
	}
	else
		this->contacts[i - 1].printcont();
}

void Phonebook::putcontIndex(int i, char sep, int width)
{
	std::cout << std::setw(width) << i + 1;
	contacts[i].printshort(sep, width);
}

void Phonebook::putbook()
{
	int width = 10;
	char sep = '|';
	std::cout << std::setw(width) << "Index" << sep << std::setw(width)
			  << "First name" << sep << std::setw(width) << "Last name" << sep
			  << std::setw(width) << "Nickname" << sep << std::endl;

	for (int i = 0; i < this->size; i++)
		putcontIndex(i, sep, width);
}

void Phonebook::addcont()
{
	Contact newcont;
	newcont.fillcont();
	if (this->size < 8)
	{
		this->contacts[size] = newcont;
		this->size++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			this->contacts[i] = this->contacts[i + 1];
		this->contacts[7] = newcont;
	}
}

void Phonebook::getcont()
{
	if (this->size == 0)
	{
		std::cout << "Book is empty" << std::endl;
		return;
	}
	this->putbook();
	this->putcont();
	return;
}
