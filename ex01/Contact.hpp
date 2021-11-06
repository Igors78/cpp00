/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:37:35 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/06 17:36:21 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Phonebook.hpp"

using std::string;

class Contact
{
public:
	Contact();
	~Contact();
	string firstname;
	string lastname;
	string nickname;
	string phonenumber;
	string darkestsecret;
};

#endif
