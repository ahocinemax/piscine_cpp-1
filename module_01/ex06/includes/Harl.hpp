/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:56:08 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/28 10:56:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};

#endif