/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:01:21 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/17 17:51:24 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *arr;
		size_t size_arr;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &arr);
		Array &operator=(const Array &arr);
		T &operator[](size_t index);
		~Array();
		size_t size() const;
};

#include "Array.tpp"

#endif