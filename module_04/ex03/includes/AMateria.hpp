/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:46:50 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/05 15:21:55 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include <iostream>

class AMateria
{
	protected:
		std::string _type;

	public :
		AMateria(std::string const &type);
		AMateria(const AMateria & src);
		AMateria& operator=(const AMateria & rhs);
		~AMateria();
		
		std::string const &getType() const; // Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif