/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:56:01 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/09 23:00:01 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    Harl h;
    if (argc == 2)
        h.complain(argv[1]);
    else {
        h.complain("DEBUG");
        h.complain("INFO");
        h.complain("WARNING");
        h.complain("ERROR");
        h.complain("whatever");
    }
    return 0;
}
