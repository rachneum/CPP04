#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound(); // Should output "Meow!"
    j->makeSound(); // Should output "Woof!"
    meta->makeSound(); // Generic sound

    delete meta;
    delete j;
    delete i;

    std::cout << "---- Wrong Example ----" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound(); // Will NOT call WrongCat::makeSound

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
