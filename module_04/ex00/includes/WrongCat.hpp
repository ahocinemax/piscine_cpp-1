/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:39:09 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 22:20:40 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat& src);
		WrongCat &operator=(const WrongCat& rhs);
		~WrongCat();
		void makeSound() const;
};

#endif