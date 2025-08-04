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

    i->makeSound();//output "Meow!".
    j->makeSound();//output "Woof!".
    meta->makeSound();//generic sound.

    delete meta;
    delete j;
    delete i;

    std::cout << "---- Wrong Example ----" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;

   //std::cout << "---- Copy Constructor Test ----" << std::endl;
   //Dog originalDog;
   //Dog copyDog(originalDog);//Dog copy constructor.
   //Cat originalCat;
   //Cat copyCat(originalCat);//Cat copy constructor.
   //
   //std::cout << "---- Assignment Operator Test ----" << std::endl;
   //Dog anotherDog;
   //anotherDog = originalDog;//Dog operator=.
   // 
   //Cat anotherCat;
   //anotherCat = originalCat;//Cat operator=.

    return 0;
}
