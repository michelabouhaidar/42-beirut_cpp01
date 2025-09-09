/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 23:27:45 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/09 17:55:40 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
: name_(name), weapon_(weapon) {}

const std::string HumanA::getName() const
{
	return name_;
}

void HumanA::attack() const
{
	std::cout << getName() << " attacks with his " << weapon_.getType() << std::endl; 
}