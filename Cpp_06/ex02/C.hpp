/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:47:41 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/16 17:05:15 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_hpp

#include "Base.hpp"

class C : public Base
{
	public :
		void Sound(){std::cout << "C Class\n";}
};

#endif 