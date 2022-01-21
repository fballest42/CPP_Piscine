/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:14:06 by fballest          #+#    #+#             */
/*   Updated: 2022/01/21 14:49:56 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int     str_error(std::string str, int err)
{
	std::cout << str << std::endl;
	return (err);
}

void		change_line(std::string line, std::string ss, int pos, char c)
{
	size_t		len;

	len = ss.length();
	while (len > 0)
	{
		line[pos++] = c;
		len--;
	}
}

std::string		check_line(std::string line, std::string s1, std::string s2)
{
	int		pos = 0;

	while ((pos = line.find(s1)) != std::string::npos )
		change_line(line, s1, pos, '_');	
	while ((pos = line.find(s2)) != std::string::npos)
		change_line(line, s2, pos, '*');
	return (line);
}

std::string		new_filename(std::string file)
{
	std::string			file_s;

	size_t pos_s = file.find_last_of(".");
	if (pos_s == std::string::npos)
		file_s = file + ".replace";
	else
		file_s = (file.substr(0, pos_s)) + ".replace";
	return (file_s);
}

int     main(int argc, char **argv)
{
	if (argc != 4)
		return (str_error("Invalid number of arguments.\n", 1));
	std::string		s1 = std::string(argv[2]);
	std::string		s2 = std::string(argv[3]);
	if (s1.length() == 0 || s2.length() == 0)
		return (str_error("At least one of the strings is not valid", 2));
	std::ifstream		file ((std::string(argv[1])));
	std::string			file_s = new_filename((std::string(argv[1])));
	if (file.is_open())
	{
		std::ofstream		file_s;
		std::string			line;
		while (std::getline(file, line))
			file_s << check_line(line, s1, s2);
		file.close();
		file_s.close();
	}
	else
		return (str_error("Invalid file.\n", 3));
	return (0);
}