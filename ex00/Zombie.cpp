/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:40:22 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/03 18:51:20 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name_(name)
{
	std::cout << "Zombie " << name_ << " created." << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name_ << " deleted." << std::endl; 
}

void Zombie::announce()
{
	std::cout << name_ << "BraiiiiiiinnnzzzZ..." << std::endl;
}