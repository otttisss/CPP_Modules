/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:37:26 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 16:03:37 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <fstream>
# include <string>

class Replace{

	public:

		Replace(void);
		~Replace(void);
		bool setFile(std::string filename);
		bool replaceFIle(std::string toSearch, std::string toReplace);
		void writeInFile(std::string content);

	private:
		std::ifstream _myFile;
		std::string _fileName;
};

#endif