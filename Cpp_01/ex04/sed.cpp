/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:57:41 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/10/18 15:24:22 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void    init_file(t_file *file, char **av)
{
	file->name = av[1];
	file->s1 = av[2];
	file->s2 = av[3];
	file->out = (std::string)av[1] + ".replace";
	file->inFile.open(file->name);
	if (file->inFile)
		file->outFile.open(file->out);
	if (!file->inFile || !file->outFile)
	{
		 std::cerr << "Unable to open file " << std::endl;
		 exit(1);
	}
}

void    read_write_file(t_file *file)
{
	size_t  pos;
	std::string line;

	while (getline(file->inFile, line))
		file->in = file->in + line + '\n';
	line = file->in;
	if (file->s1 == file->s2 || file->s1.empty())
		file->outFile << line;
	else
	{
		pos = file->in.find(file->s1);
		while (pos != std::string::npos)
		{
			line = line.substr(0, pos) + file->s2 + line.substr(pos + file->s1.length());
			pos = line.find(file->s1);
		}
		file->outFile << line;
	}
	file->inFile.close();
	file->outFile.close();
}
