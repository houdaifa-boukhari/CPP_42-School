/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:05:17 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/12/31 22:43:17 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void update(_vector pairs, std::vector<int> &main, std::vector<int> &pen)
{
	for (size_t i = 0; i < pairs.size(); i++)
   	{
		if (((i + 1) % 2) == 0)
			main.insert(main.end(), pairs[i].begin(), pairs[i].end());
		else
			pen.insert(pen.end(), pairs[i].begin(), pairs[i].end());
    }
}

void update_v2(_vector pairs, std::vector<int> &main, std::vector<int> &pen)
{
	for (size_t i = 0; i < pairs.size(); i++)
   	{
		for (size_t j = 0; j < pairs[i].size(); j++)
		{
			if (((j + 1) % 2) == 0)
				main.push_back(pairs[i][j]);
			else
				pen.push_back(pairs[i][j]);
		}
    }
}

std::vector<int> mergeVectors(_vector &pairs)
{
	std::vector<int> tmp;

	for (size_t i = 0; i < pairs.size(); ++i)
   	{
        for (size_t j = 0; j < pairs[i].size(); ++j)
			tmp.push_back(pairs[i][j]);
    }
	return (tmp);
}

void merge(_vector &pairs, int idx)
{ 
	_vector pair;
	if (pairs.empty() || idx >= pairs.size() * pairs[0].size())
		return ;
	std::cout << idx <<  std::endl;
	for (size_t i = 0; i < pairs.size(); i += 2)
	{
		std::vector<int> tmp;
		if (i + 1 < pairs.size() && pairs[i].size() == pairs[i + 1].size())
		{
			if (pairs[i].back() > pairs[i + 1].back())
				std::swap(pairs[i], pairs[i + 1]);
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
			tmp.insert(tmp.end(), pairs[i + 1].begin(), pairs[i + 1].end());
		}
		else if (i + 1 < pairs.size())
		{
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
			tmp.insert(tmp.end(), pairs[i + 1].begin(), pairs[i + 1].end());
		}
		else
			tmp.insert(tmp.end(), pairs[i].begin(), pairs[i].end());
		pair.push_back(tmp);
	}
	for (size_t i = 0; i < pair.size(); ++i)
	{
        std::cout << "[";
        for (size_t j = 0; j < pair[i].size(); ++j)
		{
            std::cout << pair[i][j];
            if (j < pair[i].size() - 1)
				std::cout << ", ";
        }
        std::cout << "]\n";
    }
	std::cout  << "----------------\n";
	merge(pair, idx * 2);
	pairs = pair;
}

std::vector<std::vector<int> > DevideOfPairs(std::vector<int> &arr)
{
	std::vector<std::vector<int> > pairs;
	for (size_t i = 0; i < arr.size(); i += 2)
	{
		std::vector<int> pair;
		pair.push_back(arr[i]);
		if (i + 1 < arr.size())
			pair.push_back(arr[i + 1]);
		if (pair.size() == 2 && pair[0] > pair[1])
			std::swap(pair[0], pair[1]);
		pairs.push_back(pair);
	}
	return (pairs);
}

_vector BinaryInsertOfPair(_vector mainchain, _vector penchain)
{
	int middle, start, end;

	for (size_t i = 0; i < penchain.size() ; i++)
	{
		start = 0;
        end = mainchain.size() - 1;
		while (start <= end)
		{
			middle = (end + start) / 2;
			if (penchain[i].back() < mainchain[middle].back())
				end = middle - 1;
			else
				start = middle + 1;
		}
		mainchain.insert(mainchain.begin() + start, penchain[i]);
	}
	return (mainchain);
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

void MergeInsertSort(std::vector<int> &arr)
{
	std::vector<int> mainchain;
	std::vector<int> penchain;
	_vector pairs = DevideOfPairs(arr);
	for (size_t i = 0; i < pairs.size(); ++i)
	{
        std::cout << "[";
        for (size_t j = 0; j < pairs[i].size(); ++j)
		{
            std::cout << pairs[i][j];
            if (j < pairs[i].size() - 1)
				std::cout << ", ";
        }
        std::cout << "]\n";
    }
	std::cout  << "----------------\n";
	merge(pairs, 2);
	arr.clear();
	arr = mergeVectors(pairs);
	pairs = DevideOfPairs(arr);
	update(pairs, mainchain, penchain);
	pairs = DevideOfPairs(mainchain);
	merge(pairs, 2);
	mainchain = mergeVectors(pairs);
	// std::cout << "---------------------\n";
	for (size_t i = 0; i < mainchain.size(); ++i)
		std::cout << mainchain[i] << " " ;
	std::cout << "\n---------------------\n";
	for (size_t i = 0; i < penchain.size(); ++i)
		std::cout << penchain[i] << " " ;
	std::cout << "\n---------------------\n";
	pairs = BinaryInsertOfPair(DevideOfPairs(mainchain), DevideOfPairs(penchain));
	mainchain.clear(), penchain.clear();
	update_v2(pairs, mainchain, penchain);
	BinaryInsert(mainchain, penchain);
	
	for (size_t i = 0; i < mainchain.size(); ++i)
		std::cout << mainchain[i] << " ";
	std::cout << std::endl;
}

	// std::cout << "---------------------\n";
	// for (size_t i = 0; i < mainchain.size(); ++i)
	// 	std::cout << mainchain[i] << " " ;
	// std::cout << "\n---------------------\n";
	// for (size_t i = 0; i < penchain.size(); ++i)
	// 	std::cout << penchain[i] << " " ;
	// std::cout << "\n---------------------\n";
	
	// for (size_t i = 0; i < pairs.size(); ++i)
	// {
    //     std::cout << "[";
    //     for (size_t j = 0; j < pairs[i].size(); ++j)
	// 	{
    //         std::cout << pairs[i][j];
    //         if (j < pairs[i].size() - 1)
	// 			std::cout << ", ";
    //     }
    //     std::cout << "]\n";
    // }