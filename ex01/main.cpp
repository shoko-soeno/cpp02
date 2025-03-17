/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:30:55 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/16 18:59:08 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>
#include "Zombie.hpp"
#define N 5

int main(void)
{
    int n = N;
    Zombie *zombie = zombieHorde(N, "hordeZombie");
    for (int i = 0; i < n; i++)
    {
        std::cout << "[" << i+1 << "] ";
        zombie[i].announce();
    }
    delete[] zombie;
    return (0);
}
