/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:10:08 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/16 13:07:59 by ivan             ###   ########.fr       */
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

        cin.ignore(numeric_limits<streamsize>::max(), '\n');        
        
        if (command == "EXIT")
            break;
        else if (command == "SEARCH")
            phonebook.SEARCH();
        else if (command == "ADD")
            phonebook.ADD();
    }
}
