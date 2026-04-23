/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 01:02:00 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/19 15:55:16 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string typeW): type(typeW)
{
}
const std::string& Weapon::getType() const 
{
    return type;
}
void Weapon::setType(std::string new_value)
{
    type = new_value;
}
