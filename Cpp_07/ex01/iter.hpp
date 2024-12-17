/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:12:53 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/17 20:32:05 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template <typename T, typename E>
void iter(T *arr, size_t size, void (*f)(E &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

#endif