/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:05:18 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/20 21:11:42 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
	this->size = 0;
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N)
{
	this->N = N;
	this->size = 0;
	std::cout << "Parametric constructor called" << std::endl;
}

Span::Span(const Span &other)
{
	this->N = other.N;
	this->size = other.size;
	this->arr = other.arr;
	std::cout << "Copy constructor called" << std::endl;
}

void Span::addNumber(int value)
{
	if (size + 1 > this->N)
		throw ("MAX Number cam add is " + std::to_string(this->N));
	arr.push_back(value);
	++size;
}

unsigned int Span::shortestSpan()
{
	if (size < 2)
		throw ("Atleast Need 2 Elemment Inside Vector");
	int tmp = INT_MAX;
	std::vector<int> c_arr = this->arr;
	std::sort(c_arr.begin(), c_arr.end());
	std::vector<int>::iterator it =  c_arr.begin();
	std::vector<int>::iterator it1 = it + 1;

	for (; it1 != c_arr.end() ; it++, it1++)
	{
		if ((*it1 - *it) < tmp)
			tmp = (*it1 - *it);
	}
	return (tmp);
}

unsigned int Span::longestSpan()
{
	if (size < 2)
		throw ("Atleast Need 2 Elemment Inside Vector");
	std::vector<int> c_arr = this->arr;
	std::sort(c_arr.begin(), c_arr.end());
	return (c_arr[this->size - 1] - c_arr[0]);
}

void Span::addMultipleNumber(std::vector<int> &c_arr)
{
	if (this->size + c_arr.size() > this->N)
		throw ("Not enough space to add all numbers!");
    this->arr.insert(arr.end(), c_arr.begin(), c_arr.end());
	this->size += c_arr.size();
}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	this->N = other.N;
	this->size = other.size;
	this->arr = other.arr;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}
