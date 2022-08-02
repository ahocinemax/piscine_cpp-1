/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:11:59 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 22:27:24 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	protected :
		std::string _type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal &operator=(const WrongAnimal& rhs);
		virtual ~WrongAnimal();

		virtual const std::string &getType() const;
		virtual void makeSound() const;
};

#endif