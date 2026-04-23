/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 00:12:22 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/18 01:42:15 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
class Zombie 
{
public :
    Zombie(std::string Foo);
    ~Zombie();
    void announce(void);
private:
    std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif