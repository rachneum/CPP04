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
    std::cout << std::endl;
    std::cout << "**** SET and GET tests ****" << std::endl;
    Cat c;
    Dog d;

    c.getBrain()->setIdea(9, "Manger du thon");
    d.getBrain()->setIdea(0, "Jouer à la balle");

    std::cout << "Cat idea: " << c.getBrain()->getIdea(9) << std::endl;
    std::cout << "Dog idea: " << d.getBrain()->getIdea(0) << std::endl;


    return 0;
}
