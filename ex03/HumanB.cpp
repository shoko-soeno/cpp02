/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:05:18 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/16 20:16:32 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name) {}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

// void HumanB::setWeapon(Weapon *weapon)
// {
//     this->weapon = weapon;
// }

void HumanB::setName(Weapon *we)
{
    _name = name;
}

void HumanB::attack(void) const
{
    if (weapon)
        std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon" << std::endl;
}

HumanB::~HumanB() {}
