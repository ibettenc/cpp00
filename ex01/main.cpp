/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:10:08 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/04 17:59:35 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    string command;
    
    while (true)
    {
        cout << "ADD | SEARCH | EXIT : ";

        if (!(cin >> command))
        {
            cin.clear();
            cin.ignore(256, '\n');
            cout << endl;
            break; // Sort de la boucle si Ctrl+D est pressé
        }

        cin.ignore();

        if (command == "EXIT")
            break;
        else if (command == "SEARCH")
            phonebook.SEARCH();
        else if (command == "ADD")
            phonebook.ADD();
    }
}
