/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 00:12:22 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/18 02:16:49 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
class Zombie 
{
public :
    Zombie();
    ~Zombie();
    void announce(void);
    void setName(std::string Name);
private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );
#endif