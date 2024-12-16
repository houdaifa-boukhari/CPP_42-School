/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:04:56 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 20:45:01 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>

class ScalarConverter
{
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter &org);
		ScalarConverter &operator=(const ScalarConverter &org);
		~ScalarConverter();
	public :
		static void convert(std::string data);
};

#endif