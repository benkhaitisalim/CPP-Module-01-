/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 00:51:56 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 17:15:18 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponA) : nameA(name), WeaponA(weaponA) 
{
        
}
void HumanA::attack()
{
    std::cout << nameA << ": attacks with their " << WeaponA.getType() << std::endl;
}
