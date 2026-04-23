/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 00:46:12 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/18 02:19:20 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombie_heap = zombieHorde(5,"SALIM");
    for(int i = 0; i < 5;i++)
    {
        Zombie_heap[i].announce();
    }
    delete[] Zombie_heap;
    return 0;
}