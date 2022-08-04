/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:11:59 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 13:50:40 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

# include <string>
# include <iostream>
# include <string.h>

class A_Animal
{
	protected :
		std::string _type;
	public :
		A_Animal();
		A_Animal(const A_Animal& src);
		A_Animal &operator=(const A_Animal& rhs);
		virtual ~A_Animal();

		virtual const std::string &getType() const;
		virtual void makeSound() const = 0;
};

#endif