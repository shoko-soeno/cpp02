/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:05:05 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/15 18:39:58 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), weapon(weapon) {}

void HumanA::attack(void) const
{
    std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {}
