/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:57:04 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/28 19:57:23 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void apply_operations(char op, std::stack<int> &stack)
{
	if (stack.size() < 2)
		throw ("Error in order");
	int b = stack.top();
	stack.pop();
	int a = stack.top();
	stack.pop();
	if (op == '+')
		stack.push(a + b);
	else if (op == '-')
		stack.push(a - b);
	else if (op == '*')
		stack.push(a * b);
	else if (op == '/')
	{
		if (b == 0)
			throw ("Error: Division by zero is undefined.");
		stack.push(a / b);
	}
}

void manilpulatData(std::string data)
{
	std::stack<int> stack;
	if (data.find_first_not_of(VALID_CH) != std::string::npos)
		throw ("Error: Invalid Character");
	size_t pos = 0;
	int nb = 0;
	std::string tmp = "";
	for (int i = 0; data[i]; i++)
	{
		if (data[i] != ' ')
		{
			tmp = (data.c_str() + i);
			pos = tmp.find(' ');
			if (pos != std::string::npos)
				tmp = tmp.substr(0, pos);
			if (tmp.find_first_not_of(OPERATIONS) != std::string::npos)
			{
				if (tmp[1] && tmp[1] != ' ')
					throw ("Error: Invalide Input");
				nb = ::atof(tmp.c_str());
				if (nb > 9)
					throw ("Error: Invalide Number");
				stack.push(nb);
			}
			else
			{
				if (tmp[1] && tmp[1] != ' ')
					throw ("Error: Invalide Input");
				apply_operations(tmp[0], stack);
			}
		}
	}
	if (!stack.empty())
		std::cout << stack.top() << std::endl;
}
