/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:22:44 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 19:33:34 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char** argv)
{
	if (argc != 4) {
		std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty()) {
		std::cerr << "Error: The search string (s1) cannot be empty." << std::endl;
		return 1;
	}
	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open()) {
		std::cerr << "Error: Cannot open input file " << filename << std::endl;
		return 1;
	}
	std::ostringstream ss;
	ss << ifs.rdbuf();
	ifs.close();
	std::string content = ss.str();
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	std::ofstream ofs((filename + ".replace").c_str());
	if (!ofs.is_open()) {
		std::cerr << "Error: Cannot create output file." << std::endl;
		return 1;
	}
	ofs << content;
	ofs.close();
	return 0;
}
