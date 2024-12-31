/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:05:21 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/31 17:15:03 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

#define NUMBERS "0123456789+"
typedef std::vector<std::vector<int> > _vector;

void MergeInsertSort(std::vector<int> &arr);

#endif