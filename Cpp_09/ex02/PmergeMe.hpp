/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:05:21 by hel-bouk          #+#    #+#             */
/*   Updated: 2025/01/01 15:13:29 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

#include <sys/time.h>

#define NUMBERS "0123456789+"
typedef std::vector<std::vector<int> > _vector;
typedef std::deque<std::deque<int> > _deque;

void print_pairs(_vector &pairs);
void print_main_pen(std::vector<int> mainchain, std::vector<int> penchain);

void merge(_vector &pairs, size_t idx);
void MergeInsertSort(std::vector<int> &arr);
std::vector<int> mergeVectors(_vector &pairs);
std::vector<std::vector<int> > DevideOfPairs(std::vector<int> &arr);
void BinaryInsert(std::vector<int> &mainchain, std::vector<int> penchain);
void update(_vector pairs, std::vector<int> &main);

/////////////////////deque///////////

void MergeInsertSort_(std::deque<int> &arr);
void BinaryInsert_(std::deque<int>&mainchain, std::deque<int>penchain);

#endif