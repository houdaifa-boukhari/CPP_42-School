/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:40:28 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 17:05:24 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_hpp

#include "Base.hpp"

class B : public Base
{
	public :
		void Sound(){std::cout << "B Class\n";}
};

#endif 