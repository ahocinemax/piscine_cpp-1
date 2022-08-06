/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:18:39 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/06 15:49:39 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "string.h"

class Character : virtual public ICharacter
{
	protected :
		std::string _name;
		AMateria *_inventory[4];
		
	public:
		Character(std::string name);
		Character(const Character& src);
		Character & operator=(const Character & rhs);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif

