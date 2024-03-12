#include <iostream>

class Person {
public:
    std::string name;
    int age;

    Person(const std::string& newName, int newAge) : name(newName), age(newAge) {}
};

int main() {
    Person john("John", 30);
    Person johnCopy = john; // Shallow copy

    johnCopy.name = "John Copy";
    johnCopy.age = 31;

    std::cout << "John's name: " << john.name << ", age: " << john.age << std::endl;
    std::cout << "John Copy's name: " << johnCopy.name << ", age: " << johnCopy.age << std::endl;

    return 0;
}