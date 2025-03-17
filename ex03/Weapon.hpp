/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:06:31 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/16 19:02:25 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
    public:
        Weapon(const std::string &type);
        ~Weapon();
        const std::string &getType(void) const;
        void setType(const std::string &type);

    private:
        std::string _type;   
};

/*
Weapon(const std::string &type);
    Passing the type as a constant reference (const std::string &) 
    avoids copying the entire string.
    This makes the function more efficient, especially for larger strings. 
    The const keyword guarantees that the string won’t be modified inside the constructor.

const std::string &getType(void) const;
    Returning a constant reference 
    avoids copying the string when you want to read its value. 
    This is more efficient and still protects the string from being altered by the caller.

void setType(const std::string &type);
    Similar to the constructor, 
    passing the new type as a constant reference avoids unnecessary copying 
    and makes the function faster
*/

#endif
