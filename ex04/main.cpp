/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:29:33 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/09 21:36:29 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#define ARGS   0
#define INPUT  1
#define OUTPUT 2

static int printError(int err)
{
	if (err == ARGS)
		std::cerr << "Error: wrong number of arguments, use ./replace file s1 s2" << std::endl;
	else if (err == INPUT)
		std::cerr << "Error: input file" << std::endl;
	else if (err == OUTPUT)
		std::cerr << "Error: output file" << std::endl;
	return 1;
}

static void replaceStrings(std::ofstream &out,
						const std::string &s1,
						const std::string &s2,
						const std::string &in)
{
	if (s1.empty())
	{
		out << in;
		return;
	}

	std::string::size_type pos = 0;
	while (true) {
		std::string::size_type hit = in.find(s1, pos);
		if (hit == std::string::npos) {
			out << in.substr(pos);
			break;
		}
		out << in.substr(pos, hit - pos);
		out << s2;
		pos = hit + s1.size();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return printError(ARGS);

	const std::string file = argv[1];
	const std::string s1   = argv[2];
	const std::string s2   = argv[3];

	std::ifstream in(file.c_str());
	if (!in.good())
		return printError(INPUT);

	const std::string fileReplace = file + ".replace";
	std::ofstream out(fileReplace.c_str());
	if (!out.good()) {
		in.close();
		return printError(OUTPUT);
	}

	std::string line;
	while (std::getline(in, line)) 
	{
		replaceStrings(out, s1, s2, line);
		if (in.good())
			out << '\n';
	}
	in.close();
	out.close();
	return 0;
}
