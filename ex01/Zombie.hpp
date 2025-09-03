/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:33:47 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/03 14:10:07 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
 #include <new>

class Zombie
{
	private:
		std::string name_;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
		void setName(const std::string& name);

};

#endif