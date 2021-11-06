/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:44:05 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/06 22:22:58 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

void Contact::fillcont()
{
	std::cout << "Enter contact:" << std::endl;
	std::cout << "First name: ";
	std::cin >> this->firstname;
	std::cout << "Last name: ";
	std::cin >> this->lastname;
	std::cout << "Nickname: ";
	std::cin >> this->nickname;
	std::cout << "Phone number: ";
	std::cin >> this->phonenumber;
	std::cout << "Darkest secret: ";
	std::cin >> this->darkestsecret;
	std::cout << "Contact is created" << std::endl;
}

void Contact::printcont()
{
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phonenumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestsecret << std::endl;
}

std::string Contact::field(std::string fld, int width)
{
	if ((int)fld.size() > width)
		return (fld.substr(0, width - 1) + ".");
	else
		return (std::string(width - fld.size(), ' ') + fld);
}

void Contact::printshort(char sep, int width)
{
	std::cout << sep << field(this->firstname, width) << sep << field(this->lastname, width)
			  << sep << field(this->nickname, width) << sep << std::endl;
}