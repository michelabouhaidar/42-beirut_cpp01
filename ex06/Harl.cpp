/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:49:54 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/19 19:50:38 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-"
			<< "specialketchup burger. I really do!"
			<< std::endl;
}

void Harl::info() const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
			<< " enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<< std::endl;
}

void Harl::warning() const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming"
			<< " for years, whereas you started working here just last month."
			<< std::endl;
}

void Harl::error() const
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
}


int getLevel(std::string level)
{
	for (std::string::size_type i = 0; i < level.size(); ++i)
		level[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(level[i])));
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] ==  level)
		return i;
	}
	return 4;
	
}

void Harl::complain(std::string level) const
{
	static function_p table[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const int idx = getLevel(level);
	if (idx < 4)
		(this->*(table[idx]))();
	else
		std::cout << "Invalid Level! "
				<< "Only the following levels are valid "
				<< "\"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\""
				<< std::endl;

}