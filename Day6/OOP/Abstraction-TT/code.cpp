#include <iostream>
using namespace std;

// Lớp trừu tượng
class Animal {
public:
    virtual void makeSound() = 0; // Phương thức trừu tượng
};

// Lớp con kế thừa từ lớp trừu tượng
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Gau gau!" << endl;
    }
};

// Lớp con kế thừa từ lớp trừu tượng
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meo meo!" << endl;
    }
};

int main() {
    Animal *animal;

    animal = new Dog();
    animal->makeSound(); // Output: Gâu gâu!

    animal = new Cat();
    animal->makeSound(); // Output: Meo meo!

    delete animal;

    return 0;
}