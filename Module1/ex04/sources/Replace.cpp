/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:37:34 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 16:25:32 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <sstream>

Replace::Replace(void)
{

};

Replace::~Replace(void)
{

};

bool	Replace::setFile(std::string filename)
{
	if (this->_myFile.is_open())
		this->_myFile.close();
	if (filename.length() == 0)
	{
		std::cerr << "filename can't be empty" << std::endl;
		return (false);
	}
	this->_myFile.open(filename.c_str());
	if (!this->_myFile.is_open())
		return (std::cout << "open error" << std::endl, false);
	this->_fileName = filename;
	return (true);
}

void	Replace::writeInFile(std::string content)
{
	std::string outFileName = this->_fileName;
	outFileName += ".replace";
	std::ofstream outfile (outFileName.c_str());
	std::cout << "Writing in a new file:" << outFileName << std::endl;
	outfile << content;
	outfile.close();
	this->_myFile.close();
}

bool	Replace::replaceFIle(std::string toSearch, std::string toReplace)
{
	std::stringstream 	buff;
	std::string			content;
	
	if (toSearch.length() == 0)
	{
		std::cerr << "toSearch can't be empty" << std::endl;
		return (false);
	}
	if (toReplace.length() == 0)
	{
		std::cerr << "toReplace can't be empty" << std::endl;
		return (false);
	}
	buff << this->_myFile.rdbuf();
	content += buff.str();
	for (size_t pos = 0; pos < content.length(); pos++)
	{
		if (content.compare(pos, toSearch.length(), toSearch) == 0)
		{
			content.erase(pos, toSearch.length());
			content.insert(pos, toReplace);
		}
	}
	writeInFile(content);
	return (true);
}