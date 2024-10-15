/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:22:29 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/09 13:46:21 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_first_name(std::string str)
{
    first_name = str;
}

void    Contact::set_last_name(std::string str)
{
    last_name = str;
}

void    Contact::set_nickname(std::string str)
{
    nickname = str;
}

void    Contact::set_phone_number(std::string str)
{
    phone_number = str;
}

void    Contact::set_dark_secret(std::string str)
{
    dark_secret = str;
}

std::string Contact::get_first_name()
{
    return (first_name);
}

std::string Contact::get_last_name()
{
    return (last_name);
}

std::string Contact::get_nickname()
{
    return (nickname);
}

std::string Contact::get_phone_number()
{
    return (phone_number);
}

std::string Contact::get_dark_secret()
{
    return (dark_secret);
}
