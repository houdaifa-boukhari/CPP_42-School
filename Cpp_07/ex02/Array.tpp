/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:18:35 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/17 18:05:59 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->arr = NULL;
	this->size_arr = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->size_arr = n;
	this->arr = new T[n]();
}

template <typename T>
Array<T>::Array(const Array &arr)
{
	this->arr =  new T[arr.size_arr]();
	this->size_arr =  arr.size_arr;
	for (size_t i = 0; i < arr.size_arr; i++)
		this->arr[i] = arr.arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &arr)
{
	if (this != arr)
	{
		delete[] this->arr;
		this->arr =  new T[arr.size_arr]();
		this->size_arr =  arr.size_arr;
		for (size_t i = 0; i < arr.size_arr; i++)
			this->arr[i] = arr.arr[i];
	}
}

template <typename T>
T & Array<T>::operator[](size_t index)
{
    if (index >= this->size_arr || index < 0)
        throw (std::out_of_range("Index out of range"));
    return (arr[index]);
}

template <typename T>
size_t Array<T>::size() const
{
	return (this->size_arr);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->arr;
	std::cout << "Array Deconstructer Is Called\n";
}
