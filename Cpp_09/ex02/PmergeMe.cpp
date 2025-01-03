/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:05:17 by hel-bouk          #+#    #+#             */
/*   Updated: 2025/01/02 22:39:48 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void update(_vector pairs, std::vector<int> &main)
{
	for (size_t i = 0; i < pairs.size(); i++)
		BinaryInsert(main, pairs[i]);
}

void merge(_vector &pairs, size_t idx)
{ 
	_vector pair;
	size_t size = pairs.size();
	if (pairs.empty() || idx >= size * pairs[0].size())
		return ;
	for (size_t i = 0; i < size; i += 2)
	{
		std::vector<int> tmp;
		if (i + 1 < size && pairs[i].size() == pairs[i + 1].size())
		{
			if (pairs[i].back() > pairs[i + 1].back())
				std::swap(pairs[i], pairs[i + 1]);
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
			tmp.insert(tmp.end(), pairs[i + 1].begin(), pairs[i + 1].end());
		}
		else if (i + 1 < size)
		{
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
			tmp.insert(tmp.end(), pairs[i + 1].begin(), pairs[i + 1].end());
		}
		else
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
		pair.push_back(tmp);
	}
	merge(pair, idx * 2);
	pairs = pair;
}

void BinaryInsert(std::vector<int> &mainchain, std::vector<int> penchain)
{
	int middle, start, end;

	for (size_t i = 0; i < penchain.size() ; i++)
	{
		start = 0;
        end = mainchain.size() - 1;
		while (start <= end)
		{
			middle = (end + start) / 2;
			if (penchain[i] < mainchain[middle])
				end = middle - 1;
			else
				start = middle + 1;
		}
		mainchain.insert(mainchain.begin() + start, penchain[i]);
	}
}

std::vector<std::vector<int> > DevideOfPairs(std::vector<int> &arr)
{
	size_t size = arr.size();
	std::vector<std::vector<int> > pairs;
	for (size_t i = 0; i < size; i += 2)
	{
		std::vector<int> pair;
		pair.push_back(arr[i]);
		if (i + 1 < size)
			pair.push_back(arr[i + 1]);
		if (pair.size() == 2 && pair[0] > pair[1])
			std::swap(pair[0], pair[1]);
		pairs.push_back(pair);
	}
	return (pairs);
}

void MergeInsertSort(std::vector<int> &arr)
{
	std::vector<int> mainchain;

	clock_t start, end;
	start = clock();
	_vector pairs = DevideOfPairs(arr);
	merge(pairs, 2);
	update(pairs, mainchain);
	// displaye time
	end = clock();
	std::cout << "Time to process a range of " << mainchain.size() << " elements with std::vector : " << (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1000000 << " us" << "\n";
	/////////////////////
	for (size_t i = 0; i < mainchain.size(); ++i)
		std::cout << mainchain[i] << " ";
	std::cout << std::endl;
}

/////////deque//////////////////////

void update_(_deque pairs, std::deque<int> &main)
{
	for (size_t i = 0; i < pairs.size(); i++)
		BinaryInsert_(main, pairs[i]);
}

void merge_(_deque &pairs, size_t idx)
{ 
	_deque pair;
	size_t size = pairs.size();
	if (pairs.empty() || idx >= size * pairs[0].size())
		return ;
	for (size_t i = 0; i < size; i += 2)
	{
		std::deque<int> tmp;
		if (i + 1 < size && pairs[i].size() == pairs[i + 1].size())
		{
			if (pairs[i].back() > pairs[i + 1].back())
				std::swap(pairs[i], pairs[i + 1]);
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
			tmp.insert(tmp.end(), pairs[i + 1].begin(), pairs[i + 1].end());
		}
		else if (i + 1 < size)
		{
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
			tmp.insert(tmp.end(), pairs[i + 1].begin(), pairs[i + 1].end());
		}
		else
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
		pair.push_back(tmp);
	}
	merge_(pair, idx * 2);
	pairs = pair;
}

void BinaryInsert_(std::deque<int>&mainchain, std::deque<int>penchain)
{
	int middle, start, end;

	for (size_t i = 0; i < penchain.size() ; i++)
	{
		start = 0;
        end = mainchain.size() - 1;
		while (start <= end)
		{
			middle = (end + start) / 2;
			if (penchain[i] < mainchain[middle])
				end = middle - 1;
			else
				start = middle + 1;
		}
		mainchain.insert(mainchain.begin() + start, penchain[i]);
	}
}

std::deque<std::deque<int> > DevideOfPairs_(std::deque<int> &arr)
{
	size_t size = arr.size();
	std::deque<std::deque<int> > pairs;
	for (size_t i = 0; i < size; i += 2)
	{
		std::deque<int> pair;
		pair.push_back(arr[i]);
		if (i + 1 < size)
			pair.push_back(arr[i + 1]);
		if (pair.size() == 2 && pair[0] > pair[1])
			std::swap(pair[0], pair[1]);
		pairs.push_back(pair);
	}
	return (pairs);
}

void MergeInsertSort_(std::deque<int> &arr)
{
	std::deque<int> mainchain;

	clock_t start, end;
	start = ::clock();
	_deque pairs = DevideOfPairs_(arr);
	merge_(pairs, 2);
	update_(pairs, mainchain);
	pairs.clear();
	pairs.push_back(mainchain);
	mainchain.clear();
	update_(pairs, mainchain);
	// displaye time
	end = ::clock();
	std::cout << "Time to process a range of " << mainchain.size() << " elements with std::deque : " << (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1000000 << " us" << "\n";
	/////////////////////
	for (size_t i = 0; i < mainchain.size(); ++i)
		std::cout << mainchain[i] << " ";
	std::cout << std::endl;
}
