#include " Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::~Zombie(void){
	std::cout << _name << ": Destructor called" << std::endl;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

std::string Zombie::getName(void) const{
	return (_name);
}

void Zombie::setName(std::string name){
	_name = name;
}