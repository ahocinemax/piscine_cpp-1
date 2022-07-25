#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(void){}

const std::string&	HumanB::getName(void) const
{
	return (_name);
}

void	HumanB::setName(std::string name)
{
	_name = name; 
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with their" << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
