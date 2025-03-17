/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:06:42 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/17 19:09:56 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}
/*
Default constructor
initializes the fixed-point value
setting _fixedPointValue to 0.
*/

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}
/*
Copy constructor
creates a new object as a copy of the existing one
ensures that the new object gets the same fixed-point value
as the original
*/

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other.getRawBits();
    return *this;
}
/*
Copy assignment operator
AVOID self-assignment!
return *this(a reference to the left-hand object) allows for chaining
    ex) Fixed a, b, c; a = b = c;
    in this case, the result of b = c is assigned to b as a reference
    and then assigned to a

"this" is a pointer to the object that is calling the function
returning *this gives you a reference to the object

this->_fixedPointValue
is equivalent to
(*this)._fixedPointValue
Here's why:
    "this" is a pointer to the object that is calling the function
    *this is the object itself
    arrow(->) is just a shorthand for 
    dereferencing the pointer and then accessing a member
    which is equivalent to using the dot operator
*/

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}
/*
const means that the function does not modify the object
*/ 

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}
