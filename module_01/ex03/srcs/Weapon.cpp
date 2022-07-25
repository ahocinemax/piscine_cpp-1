#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void) const{
	return (_type);
}

std::string Weapon::setType(std::string newType){
	_type = newType;
}