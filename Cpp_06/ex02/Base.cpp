/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:50:52 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 20:51:24 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
	::srand(::time(NULL));
	int rd = ::rand();

	if (rd % 2 == 0)
		return (dynamic_cast<Base *>(new A));
	else if (rd % 3 == 0)
		return (dynamic_cast<Base *>(new B));
	else
		return (dynamic_cast<Base *>(new C));
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "type Base is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "type Base is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "type Base is C" << std::endl;
}

void identify(Base& p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		static_cast<void>(a);
		std::cout << "type Base is A" << std::endl;
	}
	catch (const std::bad_cast& e)
	{
		try {
			B &b = dynamic_cast<B &>(p);
			static_cast<void>(b);
			std::cout << "type Base is B" << std::endl;
		}
		catch (const std::bad_cast& e)
		{
			try {
				C &c = dynamic_cast<C &>(p);
				static_cast<void>(c);
				std::cout << "type Base is C" << std::endl;
			}
			catch (const std::bad_cast& e)
			{
				std::cout << "Have a no type" << std::endl;
			}
		}
	}
}

 Base::~Base()
 {
	std::cout << "Base Deconstructer called\n";
 }