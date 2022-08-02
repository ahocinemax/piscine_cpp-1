/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:11:59 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 21:41:14 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected :
		std::string _type;
	public :
		Animal();
		Animal(const Animal& src);
		Animal &operator=(const Animal& rhs);
		~Animal();

		const std::string &getType() const;
		void makeSound() const;
};

#endif