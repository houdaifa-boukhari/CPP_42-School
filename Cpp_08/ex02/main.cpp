/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:22:12 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/21 12:43:31 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "---------------------------\n";
    std::list<int> Mylist;
    
    Mylist.push_back(5);
    Mylist.push_back(17);

    std::cout << Mylist.back() << std::endl;
    Mylist.pop_back();
    
    std::cout << Mylist.size() << std::endl;
    
    Mylist.push_back(3);
    Mylist.push_back(5);
    Mylist.push_back(737);
    Mylist.push_back(0);
	
    std::list<int>::iterator list_it = Mylist.begin();
    std::list<int>::iterator list_ite = Mylist.end();
    
    ++list_it;
    --list_it;
    
    while (list_it != list_ite) {
        std::cout << *list_it << std::endl;
        ++list_it;
    }
    
    std::list<int> new_list(Mylist);
	
	return (0);
}