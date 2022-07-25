#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private :
		Weapon *_weapon;
		std::string _name;
	
	public :
		HumanB(std::string name);
		~HumanB(void);
		const std::string&	getName(void) const;
		void				setName(std::string name);
		void				setWeapon(Weapon &weapon);
		void				attack(void) const;
};

#endif 