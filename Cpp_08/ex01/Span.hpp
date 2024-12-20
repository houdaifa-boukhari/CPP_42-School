/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:04:37 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/20 21:08:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CPP
#define SPAN_CPP

#include <vector>
#include <chrono>
#include <climits>
#include <iostream>
#include <algorithm>

class Span
{
	private :
		unsigned int N;
		unsigned int size;
		std::vector<int> arr;
	public :
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		void addNumber(int value);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addMultipleNumber(std::vector<int>& c_arr);
};

#endif