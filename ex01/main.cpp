#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    /*Création et suppression simples pour vérifier constructeurs/destructeurs*/
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();
    delete dog;
    delete cat;

    /*Tableau d'animaux avec moitié Dog, moitié Cat*/
    const int   size = 4;
    Animal*     animals[size];

    for (int i = 0; i < size; ++i)
    {
        if (i < size / 2)//Si i < que la moitié de la taille (dans ce cas si i == O ou 1)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    /*Faire faire un son à tous les animaux*/
    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    /*Nettoyage*/
    for (int i = 0; i < size; ++i)
        delete animals[i];

    return (0);
}
