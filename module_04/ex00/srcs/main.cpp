#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	Animal anil;
// 	Dog tom;
// 	Cat jerry;

// 	Cat other;

// 	std::cout << anil.getType() << std::endl;
// 	anil.makeSound();

// 	std::cout << tom.getType() << std::endl;
// 	tom.makeSound();

// 	std::cout << jerry.getType() << std::endl;
// 	jerry.makeSound();

// 	other = jerry;

// 	std::cout << other.getType() << std::endl;
// 	other.makeSound();

// 	std::cout << tom.getType() << std::endl;

// 	return (0);
// }


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	return 0;
}