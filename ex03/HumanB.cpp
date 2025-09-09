/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:47:25 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/09 17:59:29 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
: name_(name), weapon_(0) {}

void HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}

const std::string HumanB::getName() const
{
	return name_;
}

void HumanB::attack() const
{
	if (weapon_)
		std::cout << getName() << " attacks with his " << weapon_->getType() << std::endl;
	else
		std::cout << getName() << " attacks with their bare hands" << std::endl;
}