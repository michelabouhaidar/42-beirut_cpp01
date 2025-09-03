/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:32:18 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/03 23:26:26 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type_(type) {}

Weapon::~Weapon() {}

std::string Weapon::getType() const
{
    return type_;
}

void Weapon::setType(const std::string& type)
{
    type_ = type;
}