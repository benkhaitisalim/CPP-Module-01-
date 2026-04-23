/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_function.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:15:25 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 17:29:19 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void Sed::SetFilename(std::string av1)
{
    filename = av1;
}
void Sed::SetS1(std::string av2)
{
   s1 = av2;
}
void Sed::SetS2(std::string av3)
{
    s2 = av3;
}
int Sed::validationInput()
{
    if(s1.empty() || s2.empty())
    {
        if(!s1.empty())
        {
            std::cout << "S1 is empty";
            return 1;    
        }
        else 
        {
            std::cout << "S2 is empty";
            return 1;
        }
    }
    return 0;
}
void Sed::let_replace()
{
    std::ifstream file(filename);
    if(!file.is_open())
    {
        std::cerr << "FAILED TO OPEN FILE" << std::endl;
        return ;
    }
    std::ofstream file2(filename + ".replace");
    std::string input;
    bool is_first_line = true;
    
    while(std::getline(file,input))
    {
        size_t pos = 0;
        while((pos = input.find(s1,pos)) != std::string::npos)
        {
            input.erase(pos,s1.length());
            input.insert(pos,s2);
            pos += s2.length();
        }
        if (!is_first_line)
        {
            file2 << std::endl;
        }
        file2 << input;
        is_first_line = false;
    }
}
