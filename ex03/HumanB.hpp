/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:05:20 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/16 20:21:30 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
    public:
        HumanB(const std::string &name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack(void) const;

    private:
        std::string _name;
        Weapon *weapon; 
};

/*
the member variable is declared as a pointer (Weapon*), 
which provides flexibility (it can be null or changed later). 
However, the setWeapon function uses a reference (Weapon&):

Ease of Use for the Caller:When calling setWeapon, 
you can simply pass a Weapon object without needing to take its address explicitly. 

Ensured Validity:
References in C++ must always refer to an existing object, 
so using a reference guarantees that a valid Weapon object is provided. 
This avoids the risk of accidentally passing a null pointer.

Internal Flexibility:
The class stores the weapon as a pointer 
so that it can represent the absence of a weapon (by being null) or 
allow the weapon to change during the object's lifetime. 
The setWeapon function takes a reference for safety and convenience, 
then assigns its address to the pointer:
this->weapon = &weapon;
*/

#endif
