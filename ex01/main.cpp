#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 4;
    Animal* animals[size];

    std::cout << "\n🧠 Creating Animals...\n" << std::endl;

    for (int i = 0; i < size; ++i) {
        animals[i] = (i < size / 2) ? (Animal*)new Dog() : (Animal*)new Cat();
    }

    std::cout << "\n💬 Sounds:\n" << std::endl;

    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    std::cout << "\n🧽 Deleting Animals...\n" << std::endl;

    for (int i = 0; i < size; ++i)
        delete animals[i];

    std::cout << "\n🧪 Deep Copy Test:\n" << std::endl;

    Dog basic;
    basic.getBrain()->setIdea(0, "Chase the cat!");

    Dog copy = basic;
    copy.getBrain()->setIdea(0, "Eat kibble.");

    std::cout << "Original Dog Brain[0]: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Brain[0]:   " << copy.getBrain()->getIdea(0) << std::endl;

    return 0;
}
