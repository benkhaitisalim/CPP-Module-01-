/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 00:41:45 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/19 15:51:57 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
class Weapon 
{
public:
    Weapon(std::string typeW);
    const std::string& getType() const;
    void setType(std::string new_value);
private:
    std::string type;
};

#endif