/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:45:57 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/15 21:57:03 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>

class Harl
{
	private:
		void debug() const;
		void info() const;
		void warning() const;
		void error() const;
	public:
		Harl();
		~Harl();
		void complain(std::string level) const;
};

int getLevel(std::string level);
typedef void (Harl::*function_p)(void) const;

#endif