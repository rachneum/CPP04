#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal* meta = new Animal(); // <- interdit maintenant

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound(); // Meow!
    j->makeSound(); // Woof!

    delete j;
    delete i;

    return 0;
}
