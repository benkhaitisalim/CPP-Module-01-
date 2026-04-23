/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 00:47:27 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/19 03:55:41 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA
{
private:
    std::string nameA;
    Weapon& WeaponA;
public:
    HumanA(std::string name, Weapon& weaponA);
    void attack();
};
#endif