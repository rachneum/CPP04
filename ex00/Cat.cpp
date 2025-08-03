#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called." << std::endl;
    if (this != &other)
        Animal::operator=(other);//Je demande à ma class Animal de fire son propre opérateur d'affectation.
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
