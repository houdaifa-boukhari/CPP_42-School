/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:26:07 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/20 22:17:42 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack Constructer Is Called\n";
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other)
{
	std::cout << "MutantStack Copy Constructer Is Called\n";
	*this = other;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{
	std::cout << "MutantStack Assignation Operator Is Called\n";
	if (this == &other)
		return (*this);
	std::stack<T>::operator=(other);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack Deconstructer Is Called\n";
}
