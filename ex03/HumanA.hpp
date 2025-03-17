/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:05:14 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/15 18:56:44 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();
        void attack(void) const;

    private:
        std::string _name;
        Weapon &weapon; 
};

/*
HumanA is designed so that it always has a weapon. 
Using a reference here means:
    - No Null Weapon: The reference must be initialized when a HumanA is created,
        so there's no chance of having an unarmed HumanA.
    - Direct Link: HumanA holds a direct link to an existing Weapon object. 

Any changes made to the Weapon (like changing its type) are 
immediately reflected in HumanA's behavior.
*/

#endif
