/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:39:09 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 00:06:42 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal
{
	private :
		Brain *_brain; 

	public :
		Cat();
		Cat(const Cat& src);
		Cat &operator=(const Cat& rhs);
		~Cat();
		void makeSound() const;
};

#endif