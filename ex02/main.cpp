#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //Animal  a;//<- interdit maintenant.
    //Animal* a = new Animal();//<- interdit maintenant.

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;

    return 0;
}
