/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:16:05 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/20 22:17:23 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <stack>
#include <iostream>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack &other);
		~MutantStack();
		typedef typename std::deque<T>::iterator iterator;
    	typedef typename std::deque<T>::const_iterator const_iterator;
    	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
        iterator begin() {return (this->c.begin());}
        const_iterator begin() const {return (this->c.begin());}
        iterator end() {return this->c.end();}
        const_iterator end() const {return this->c.end();}
        reverse_iterator rbegin() {return this->c.rbegin();}
        const_reverse_iterator rbegin() const {return this->c.rbegin();}
        reverse_iterator rend() {return this->c.rend();}
        const_reverse_iterator rend() const {return this->c.rend();}
};

#include "MutantStack.tpp"

#endif