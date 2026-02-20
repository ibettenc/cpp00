/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:26:19 by ivan              #+#    #+#             */
/*   Updated: 2026/02/20 17:45:02 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

Contact::Contact(string fn, string ln, string n, string pn, string ds)
{
    first_name = fn;
    last_name = ln;
    nickname = n;
    phone_number = pn;
    darkest_secret = ds;
}

string Contact::get_first_name()
{
    return first_name;
}

string Contact::get_last_name()
{
    return last_name;
}

string Contact::get_nickname()
{
    return nickname;
}

string Contact::get_phone_number()
{
    return phone_number;
}

string Contact::get_darkest_secret()
{
    return darkest_secret;
}