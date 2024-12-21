/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:40:54 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/21 12:32:52 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <algorithm>

template <typename T>
bool easyfind(const T& container, int &n)
{
	typename T::const_iterator it;
	it  = find(container.begin(), container.end(), n);
	if (it != container.end())
		return (true);
	return (false);
}

#endif