/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 02:01:17 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 17:01:17 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::setName(std::string Name)
{
    this->name = Name;
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        zombieHorde[i].setName(name);
    }
    
    return zombieHorde;
}