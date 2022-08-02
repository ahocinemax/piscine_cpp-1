#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal anil;
	Dog tom;
	Cat jerry;

	Cat other;

	std::cout << anil.getType() << std::endl;
	anil.makeSound();

	std::cout << tom.getType() << std::endl;
	tom.makeSound();

	std::cout << jerry.getType() << std::endl;
	jerry.makeSound();

	other = jerry;

	std::cout << other.getType() << std::endl;
	other.makeSound();

	std::cout << tom.getType() << std::endl;

	return (0);
}