/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 00:50:59 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 17:33:24 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* WeaponB; 
    std::string nameB;
public:
    HumanB(std::string name);
    void setWeapon(Weapon& weaponB);
    void attack();
};
#endif