/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:09:29 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/20 17:18:57 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP
#include <iostream>
#include <fstream> // hady kadir contains file stream processing types
#include <string>

class Sed
{
    private:
    std::string filename;
    std::string s1;
    std::string s2;
    public:
    void SetFilename(std::string av1);
    void SetS1(std::string av2);
    void SetS2(std::string av3);
    int validationInput();
    void let_replace();
};
#endif