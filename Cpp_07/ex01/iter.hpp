/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:12:53 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/18 14:24:24 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template <typename T>
void print_(T &data)
{
	std::cout << data << std::endl;
}

template <typename T, typename A, typename E>
void iter(T *arr, size_t size, A(*f)(E &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

#endif