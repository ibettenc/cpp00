/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:10:08 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/17 14:39:36 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
        ADD()
        {
            // - save a new contact
            // if 8 contacts create a new one and delete the oldest
            // - ask an input for each parameter
            // a saved contact cannot have empty field
        }
        SEARCH()
        {
            // - display a specific contact
            //  Display the saved contacts as a list of 4 columns: index, first name, last
            //     name and nickname.
            // ◦ Each column must be 10 characters wide. A pipe character (’|’) separates
            // them. The text must be right-aligned. If the text is longer than the column,
            // it must be truncated and the last displayable character must be replaced by a dot (’.’).
            // ◦ Then, prompt the user again for the index of the entry to display. If the index
            // is out of range or wrong, define a relevant behavior. Otherwise, display the
            // contact information, one field per line
        }
        EXIT()
        {
            // exit the program and DONT SAVE the contacts
        }
};

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


int main()
{
    Contact alice("Alice", "0456356220");
}

V 1 Crée la classe Contact avec ses attributs et getters/setters
V 2 Crée la classe PhoneBook avec le tableau fixe 
3 Code la commande ADD
4 Code la commande SEARCH
5 Gère la boucle principale dans main()