/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:53:44 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/17 14:14:57 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Number 
{
private:
    int value;

public:
    Number(int value);
    ~Number();

    Number operator+(Number const & rhs) const
    {
        return Number(this->value + rhs.value);
    }
    int getValue() const
    {
        return value;
    }
};

Number::Number(int value) : value(value) {}
Number::~Number() {}

#endif
