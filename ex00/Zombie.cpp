/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 00:16:51 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 16:57:36 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string Foo)
{
    std::cout << "Constructor " << Foo << " called" << std::endl;
    this->name = Foo;
}
Zombie::~Zombie()
{
    std::cout << name << ": Zombie is destroyed" << std::endl;
}