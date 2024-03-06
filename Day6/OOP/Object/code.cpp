#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    string major;

public:
    Student(const string& studentName, int studentAge, const string& studentMajor) {
        name = studentName;
        age = studentAge;
        major = studentMajor;
    }

    void displayInfo() {
        cout << "ten : " << name << endl;
        cout << "tuoi : " << age << endl;
        cout << "nganh : " << major << endl;
    }
};

int main() {
    Student student1("An An", 20, "Computer Science");
    student1.displayInfo();

    cout << "==================================="<< endl;

    Student student2("Thanh Thanh", 22, "Business Administration");
    student2.displayInfo();

    return 0;
}