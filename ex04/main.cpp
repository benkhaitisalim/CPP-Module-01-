/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:26:20 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 17:19:29 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac ,char **av)
{
    if(ac != 4)
    {
        std::cout << "The program accept three parameters" << std::endl;
        return 1;
    }
    Sed replace;
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    replace.SetS1(s1);
    replace.SetS2(s2);
    replace.SetFilename(filename);
    if(replace.validationInput() == 1)
    {
        return 1;
    }
    replace.let_replace();
    return 0;
    
}