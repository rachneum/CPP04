#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();//virtual ici permet de s'assurer que le bon destructeur est appelé qd on détruit un objet à travers un pointeur de la classe de base.
        
        virtual void makeSound() const;//virtual => appelle la fonction correspondant au type réel de l'objet (ex : Dog), même si le pointeur est de type Animal*.
        std::string getType() const;
};

#endif
