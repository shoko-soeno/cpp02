/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:40:54 by ssoeno            #+#    #+#             */
/*   Updated: 2026/09/07 13:45:57 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(float const x, float const y);
    Point(Point const &other);
    ~Point();
    Point &operator=(Point const &other);
    Fixed const &getX() const;
    Fixed const &getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream &operator<<(std::ostream &out, Point const &p);

#endif // POINT_HPP
