/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:53:44 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/17 15:50:13 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

/*
static is used to define a member 
that is shared among all objects of the class.

Orthodox Canonical Form (OCF):
    - Default constructor
    - Copy constructor
    - Assignation operator overload
    - Destructor
    
Copy constructor
- Initializes a new object with a existing one
    - ex) Fixed a; Fixed b(a);
- Passing an object by value to a function


*/

#endif
