/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 00:46:12 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 16:54:48 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombie_heap = newZombie("ok");
    Zombie_heap->announce();
    delete Zombie_heap;
    randomChump("Zombie_on_Stack");
    return 0;
}