/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 00:51:56 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 17:34:45 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : WeaponB(NULL),nameB(name) 
{
}

void HumanB::setWeapon(Weapon& weaponB)
{
    WeaponB = &weaponB;
}
void HumanB::attack()
{
    if(WeaponB)
    {
        std::cout << nameB << ": attacks with their " << WeaponB->getType() << std::endl;
    }
    else 
        std::cout << nameB << ": has no Weapon to attack with"  << std::endl;

}


