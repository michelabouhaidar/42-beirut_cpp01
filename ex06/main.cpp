/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:56:01 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/09 23:21:27 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv)
{
	Harl h;
	int level;
	if (argc != 2)
		std::cout << "Usage: ./harlFilter <complain>" << std::endl;
	level = getLevel(argv[1]); 
	switch(level)
	{
		case 0: h.complain("DEBUG"); break;
		case 1: h.complain("INFO"); break;
		case 2: h.complain("WARNING"); break;
		case 3: h.complain("ERROR"); break;
		default: h.complain("invalid complain"); 
	}
	return 0;
}
