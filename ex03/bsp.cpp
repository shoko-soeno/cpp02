/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:40:49 by ssoeno            #+#    #+#             */
/*   Updated: 2026/09/07 13:40:50 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// z component of the cross product (b - a) x (p - a):
// its sign tells on which side of the line (a, b) the point p lies
static Fixed cross(Point const &a, Point const &b, Point const &p)
{
    return ((b.getX() - a.getX()) * (p.getY() - a.getY())
            - (b.getY() - a.getY()) * (p.getX() - a.getX()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed const zero(0);
    Fixed const d1 = cross(a, b, point);
    Fixed const d2 = cross(b, c, point);
    Fixed const d3 = cross(c, a, point);

    if (d1 == zero || d2 == zero || d3 == zero)
        return false;
    bool const hasNeg = (d1 < zero) || (d2 < zero) || (d3 < zero);
    bool const hasPos = (d1 > zero) || (d2 > zero) || (d3 > zero);
    return !(hasNeg && hasPos);
}
