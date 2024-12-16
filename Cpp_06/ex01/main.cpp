/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:26:37 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 15:29:11 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data a;
	Data *p;
	uintptr_t data = 10000;
	a.id = 10;
	std::cout << p << std::endl;
	p = Serializer::deserialize(data);
	std::cout << Serializer::serialize(&a) << std::endl;
	std::cout << p << std::endl;
}