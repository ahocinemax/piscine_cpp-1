#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private :
		std::string _name;
		Weapon  &_weapon;
	
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		const std::string&	getName(void) const;
		void				setName(std::string name);
		void				attack(void) const;
};

#endif 