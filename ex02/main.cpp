/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:30:55 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/15 18:04:00 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Address of brain: " << &brain << std::endl;
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;
    
    std::cout << "Value of brain: " << brain << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;
    
    return (0);
}

/*
&brain is the "address-of" operator which gives the memory address

Reference:
std::string & declares a reference(an alias for another variable) to a string.
stringREF is now alias for brain.

Astereisk (*)
- declares a pointer
- also used to dereference a pointer (access the value pointed by a pointer)

Ampersand (&)
- declares a reference
- retrieves the memory address of a variable
*/
