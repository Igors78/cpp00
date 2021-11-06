/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:32:06 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/06 21:01:35 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
public:
	Phonebook();
	~Phonebook();
	int size;
	Contact contacts[8];
	void addcont();
	void getcont();
	void putcont();
	void putcontIndex(int i, char sep, int width);
	void putbook();
};

#endif
