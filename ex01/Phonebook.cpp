/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:29:40 by ivan              #+#    #+#             */
/*   Updated: 2026/02/20 17:45:05 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	oldest = 0;
}
void PhoneBook::ADD()
{
	string first_name;
	string last_name;
	string nickname;
	string phone_number;
	string darkest_secret;

	cout << "First name : ";
	cin >> first_name;

	cout << "Last_name : ";
	cin >> last_name;

	cout << "Nickname : ";
	cin >> nickname;

	cout << "Phone number : ";
	cin >> phone_number;

	cout << "Darkest secret : ";
	cin >> darkest_secret;

	Contact new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	contacts[oldest] = new_contact;

	if (count < 8)
		count++;

	oldest++;

	if (oldest == 8)
		oldest = 0;
}
void PhoneBook::SEARCH()
{
	if (count == 0)
	{
		cout << "No concacts yet" << endl;
		return;
	}

	int i = 0;
	while (i < count)
	{
		cout << i;
		cout << " | ";

		if (contacts[i].get_first_name().length() > 10)
			cout << setw(10) << contacts[i].get_first_name().substr(0, 9) + ".";
		else
			cout << setw(10) << contacts[i].get_first_name();
		cout << " | ";

		if (contacts[i].get_last_name().length() > 10)
			cout << setw(10) << contacts[i].get_last_name().substr(0, 9) + ".";
		else
			cout << setw(10) << contacts[i].get_last_name();
		cout << " | ";

		if (contacts[i].get_nickname().length() > 10)
			cout << setw(10) << contacts[i].get_nickname().substr(0, 9) + ".";
		else
			cout << setw(10) << contacts[i].get_nickname();
		cout << endl;
		i++;
	}

	int index;
	cout << "Enter an index : ";
	cin >> index;

	if (index >= count || index < 0)
		cout << "Error : enter a valid index" << endl;
	else
	{
		cout << "First name : ";
		cout << contacts[index].get_first_name() << endl;
		cout << "Last name : ";
		cout << contacts[index].get_last_name() << endl;
		cout << "Nickname : ";
		cout << contacts[index].get_nickname() << endl;
		cout << "Phone number : ";
		cout << contacts[index].get_phone_number() << endl;
		cout << "Darkest secret : ";
		cout << contacts[index].get_darkest_secret() << endl;
	}
}
