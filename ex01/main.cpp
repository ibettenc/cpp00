/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:10:08 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/19 14:37:35 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Contact
{
    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;
        
    public:
        Contact()
        {
            first_name = "";
            last_name = "";
            nickname = "";
            phone_number = "";
            darkest_secret = "";
        }
        Contact(
            string fn,
            string ln,
            string n,
            string pn,
            string ds)
        {
            first_name = fn;
            last_name = ln;
            nickname = n;
            phone_number = pn;
            darkest_secret = ds;
        }
        string get_first_name()
        {
            return first_name;
        }
        string get_last_name()
        {
            return last_name;
        }
        string get_nickname()
        {
            return nickname;
        }
        string get_phone_number()
        {
           return phone_number;
        }
        string get_darkest_secret()
        {
            return darkest_secret;
        }
};

class PhoneBook
{
    private:
        Contact contacts[8];
        int count;
        int oldest;
            
    public:
        PhoneBook()
        {
            count = 0;
            oldest = 0;
        }
        void ADD()
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
        void SEARCH()
        {
            for (int i = 0; i < count; i++)
            {
                cout << i;
                cout << " | ";
                cout << contacts[i].get_first_name();
                cout << " | ";
                cout << contacts[i].get_last_name();
                cout << " | ";
                cout << contacts[i].get_nickname();
                cout << endl;
            }
            

            // ◦ Each column must be 10 characters wide. A pipe character (’|’) separates
            // them. The text must be right-aligned. If the text is longer than the column,
            // it must be truncated and the last displayable character must be replaced by a dot (’.’).
            // ◦ Then, prompt the user again for the index of the entry to display. If the index
            // is out of range or wrong, define a relevant behavior. Otherwise, display the
            // contact information, one field per line
        }
        void EXIT()
        {
            // exit the program and DONT SAVE the contacts
        }
};




int main()
{
    PhoneBook phonebook;
    string command;
    
    while (true)
    {
        cout << ": ";
        cin >> command;
        
        if (command == "EXIT")
            break;
        else if (command == "SEARCH")
            phonebook.SEARCH();
        else if (command == "ADD")
            phonebook.ADD();
    }
}

// V 1 Crée la classe Contact avec ses attributs et getters/setters
// V 2 Crée la classe PhoneBook avec le tableau fixe 
// 3 Code la commande ADD
// 4 Code la commande SEARCH
// 5 Gère la boucle principale dans main()