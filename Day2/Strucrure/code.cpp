#include <iostream>

using namespace std;
struct Person {
    string name;
    int age;
    string address;
};

int main(int argc, char const *argv[])
{
    Person person1;
    person1.name = "An";
    person1.age = 22;
    person1.address = "Quang Nam";

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    Person person2;
    person1.name = "TuanAnh";
    person1.age = 22;
    person1.address = "Quang Binh";

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;


    // Person* ptr = &person1;
    // cout << "Name: " << ptr->name << endl;
    // cout << "Age: " << ptr->age << endl;
    // cout << "Address: " << ptr->address << endl;
    return 0;
}
