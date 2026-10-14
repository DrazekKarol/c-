/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:33:31 by kdrazek           #+#    #+#             */
/*   Updated: 2026/08/05 17:53:26 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Adresses in memory" << std::endl;
    std::cout << "Address of variable str: " << &str << std::endl;
    std::cout << "Address in stringPTR:    " << stringPTR << std::endl;
    std::cout << "Address in stringREF:    " << &stringREF << std::endl;

    std::cout << "\nValues" << std::endl;
    std::cout << "Value of variable str:   " << str << std::endl;
    std::cout << "Value through pointer:   " << *stringPTR << std::endl;
    std::cout << "Value through reference: " << stringREF << std::endl;

    return 0;
}
