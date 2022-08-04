/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:17:51 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 13:54:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public A_Animal
{
	private :
		Brain* _brain;
	
	public : 
		Dog();
		Dog(const Dog& src);
		Dog &operator=(const Dog& rhs);
		~Dog();

		void makeSound() const;
		
};

#endif