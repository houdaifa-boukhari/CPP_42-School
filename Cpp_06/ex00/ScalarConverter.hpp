/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:04:56 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 12:12:08 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <climits>

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