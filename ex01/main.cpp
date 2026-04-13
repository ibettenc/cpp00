/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:10:08 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/13 16:12:09 by ivan             ###   ########.fr       */
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
        cin >> command;
        
        cin.ignore();

        if (command == "EXIT")
            break;
        else if (command == "SEARCH")
            phonebook.SEARCH();
        else if (command == "ADD")
            phonebook.ADD();
    }
}
