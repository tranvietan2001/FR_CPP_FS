#include <iostream>

class Animal {
public:
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    Dog* dog = dynamic_cast<Dog*>(animal);

    if (dog) {
        dog->bark();
    } else {
        std::cout << "Failed to cast to Dog." << std::endl;
    }
    delete animal;
    return 0;
}

