/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:17:51 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 21:50:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : virtual public Animal
{
	public : 
		Dog();
		Dog(const Dog& src);
		Dog &operator=(const Dog& rhs);
		~Dog();

		void makeSound() const;
};

#endif