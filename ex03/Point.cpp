/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:40:49 by ssoeno            #+#    #+#             */
/*   Updated: 2026/09/07 13:40:50 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(Point const &other) : x(other.x), y(other.y) {}

Point::~Point() {}

// x and y are const: the coordinates cannot be reassigned after construction
Point &Point::operator=(Point const &other)
{
    (void)other;
    return *this;
}

Fixed const &Point::getX() const
{
    return this->x;
}

Fixed const &Point::getY() const
{
    return this->y;
}

std::ostream &operator<<(std::ostream &out, Point const &p)
{
    out << "(" << p.getX() << ", " << p.getY() << ")";
    return out;
}

