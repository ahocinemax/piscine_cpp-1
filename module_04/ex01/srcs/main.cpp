#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// 	int k = 0;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	// Animal * arrayAnimal[4];
	// while (k < 2)
	// {
	// 	arrayAnimal[k] = new Dog();
	// 	k++;
	// }
	// while (k < 4)
	// {
	// 	arrayAnimal[k] = new Cat();
	// 	k++;
	// }
	// k = 0;
	// while(k < 4)
	// {
	// 	delete arrayAnimal[k];
	// 	k++;
	// }
	Cat chat_vnr;
	{
		Cat tmp = chat_vnr;
	}
	Dog chien_vnr;
	{
		Dog tmp = chien_vnr;
	}

	return 0;
}