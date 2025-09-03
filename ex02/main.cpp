/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:53:06 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/03 18:56:42 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str:         " << &str       << std::endl;
    std::cout << "Address in stringPTR:   " << stringPTR  << std::endl;
    std::cout << "Address from stringREF: " << &stringREF << std::endl;
    std::cout << "Value of str:           " << str        << std::endl;
    std::cout << "Value via stringPTR:    " << *stringPTR << std::endl;
    std::cout << "Value via stringREF:    " << stringREF  << std::endl;
}