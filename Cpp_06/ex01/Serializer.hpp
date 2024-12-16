/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:58:11 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 20:46:56 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP

#include <iostream>
#include <cstdint>
#include "Data.hpp"

struct s_data;
typedef s_data Data;

class Serializer
{
	private :
		Serializer();
		Serializer(const Serializer &org);
		Serializer &operator=(const Serializer &org);
		~Serializer();
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif