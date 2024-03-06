#include <iostream>
using namespace std;

// Lớp cơ sở
class Animal {
protected:
    string name;

public:
    Animal(const string& animalName) : name(animalName) {}

    void eat() {
        cout << name << " dang an." << endl;
    }

    void sleep() {
        cout << name << " dang ngu." << endl;
    }
};

// Lớp kế thừa từ lớp cơ sở
class Cat : public Animal {
public:
    Cat(const string& catName) : Animal(catName) {}

    void meow() {
        cout << name << " keu meo meo." << endl;
    }
};

// Lớp kế thừa từ lớp cơ sở
class Dog : public Animal {
public:
    Dog(const string& dogName) : Animal(dogName) {}

    void bark() {
        cout << name << " keu gau gau" << endl;
    }
};

int main() {
    Cat myCat("Mimi");
    myCat.eat();  // Output: Mimi dang an.
    myCat.sleep(); // Output: Mimi dang ngu.
    myCat.meow(); // Output: Mimi keu meo meo.

    Dog myDog("Buddy");
    myDog.eat();  // Output: Buddy dang an.
    myDog.sleep(); // Output: Buddy dang ngu.
    myDog.bark(); // Output: Buddy keu gau gau.

    return 0;
}