/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:39:09 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 22:11:23 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : virtual public Animal
{
	public :
		Cat();
		Cat(const Cat& src);
		Cat &operator=(const Cat& rhs);
		~Cat();
		void makeSound() const;
};

#endif