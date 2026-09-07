/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:30:55 by ssoeno            #+#    #+#             */
/*   Updated: 2026/09/07 13:47:22 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <string>

static void test(std::string const &label, Point const &a, Point const &b,
                 Point const &c, Point const &p, bool expected)
{
    bool const result = bsp(a, b, c, p);

    std::cout << label << " " << p << " -> " << (result ? "inside" : "outside")
              << " [" << (result == expected ? "OK" : "KO") << "]" << std::endl;
}

int main(void)
{
    Point const a(0.0f, 0.0f);
    Point const b(10.0f, 0.0f);
    Point const c(0.0f, 10.0f);

    std::cout << "--- triangle " << a << " " << b << " " << c << " ---" << std::endl;
    test("strictly inside ", a, b, c, Point(2.0f, 2.0f), true);
    test("near centroid   ", a, b, c, Point(3.33f, 3.33f), true);
    test("outside far     ", a, b, c, Point(20.0f, 20.0f), false);
    test("outside negative", a, b, c, Point(-1.0f, 5.0f), false);
    test("on vertex a     ", a, b, c, a, false);
    test("on vertex b     ", a, b, c, b, false);
    test("on edge ab      ", a, b, c, Point(5.0f, 0.0f), false);
    test("on hypotenuse   ", a, b, c, Point(5.0f, 5.0f), false);
    test("just inside edge", a, b, c, Point(4.9f, 5.0f), true);
    test("just outside    ", a, b, c, Point(5.1f, 5.0f), false);

    // reversed winding order must give the same answers
    std::cout << "--- reversed winding ---" << std::endl;
    test("strictly inside ", c, b, a, Point(2.0f, 2.0f), true);
    test("outside         ", c, b, a, Point(11.0f, 1.0f), false);

    Point const d(-5.0f, -5.0f);
    Point const e(5.0f, -5.0f);
    Point const f(0.0f, 5.0f);
    std::cout << "--- triangle " << d << " " << e << " " << f << " ---" << std::endl;
    test("origin inside   ", d, e, f, Point(0.0f, 0.0f), true);
    test("outside below   ", d, e, f, Point(0.0f, -6.0f), false);
    test("on edge de      ", d, e, f, Point(0.0f, -5.0f), false);

    std::cout << "--- Point OCF ---" << std::endl;
    Point const g(1.5f, 2.5f);
    Point const h(g);
    Point i;
    std::cout << "default : " << i << std::endl;
    std::cout << "params  : " << g << std::endl;
    std::cout << "copy    : " << h << std::endl;
    i = g; // coordinates are const, so i stays unchanged
    std::cout << "assigned: " << i << std::endl;
    return 0;
}

