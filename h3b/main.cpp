#include"animal.h"
#include"dog.h"

int main()
{
    Animal *objectAnimal = new Animal;
    Dog *objectDog = new Dog;

    objectAnimal->callOut();
    objectDog->callOut();

    delete objectAnimal;
    objectAnimal=nullptr;

    delete objectDog;
    objectDog=nullptr;

    return 0;
}
