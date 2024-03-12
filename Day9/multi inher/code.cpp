#include <iostream>
using namespace std;

class Person{
private:
    string m_name{};
    int m_age{};

public:
    Person(string_view name, int age)
        : m_name{ name }, m_age{ age }
    {}

    string& getName()  { return m_name; }
    int getAge() { return m_age; }
};

class Employee{
private:
    string m_employer{};
    double m_wage{};

public:
    Employee(string employer, double wage)
        : m_employer{ employer }, m_wage{ wage }
    {}

    string& getEmployer() { return m_employer; }
    double getWage() { return m_wage; }
};


class Teacher : public Person, public Employee {
private:
    int m_teachesGrade{};

public:
    Teacher(string name, int age, string employer, double wage, int teachesGrade)
        : Person{ name, age }, Employee{ employer, wage }, m_teachesGrade{ teachesGrade }
    {}

    int getTeachsGrede(){ return m_teachesGrade; }
};

int main()
{
    Teacher t{ "Mary", 45, "Boo", 14.3, 8 };
    cout << "Class Person   ==> Name: " << t.getName() << endl;
    cout << "Class Person   ==> Age: " << t.getAge() << endl;
    cout << "Class Employee ==> Employer: " << t.getEmployer() << endl;
    cout << "Class Employee ==> Wage: " << t.getWage() << endl;
    cout << "Class Teacher  ==> Teachs grede: " << t.getTeachsGrede() << endl;

    return 0;
}