/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:56:01 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/19 19:49:14 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv)
{
	Harl h;
	int level;
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <complain>" << std::endl;
		return 1;
	}
	level = getLevel(argv[1]); 
	switch(level)
	{
		case 3: h.complain("ERROR"); // fall through
		case 2: h.complain("WARNING"); // fall through
		case 1: h.complain("INFO"); // fall through
		case 0: h.complain("DEBUG"); break;
		default: h.complain("Invalid complain"); 
	}
	return 0;
}
