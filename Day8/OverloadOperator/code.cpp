// #include <iostream>
// #include <string>

// class Person
// {
// public:
//     std::string name;
//     int age;

//     Person(const std::string &personName, int personAge) 
//     : name(personName)
//     , age(personAge) 
//     {}

//     // định nghĩa các hàm toán tử là thành viên của lớp Person     
//     // Overloading the less than operator (<)
//     bool operator < (const Person &other) const    {
//         return age < other.age;
//     }

//     // Overloading the greater than operator (>)
//     bool operator > (const Person &other) const    {
//         return age > other.age;
//     }

//     // Overloading the less than or equal to operator (<=)
//     bool operator <= (const Person &other) const    {
//         return age <= other.age;
//     }

//     // Overloading the greater than or equal to operator (>=)
//     bool operator >= (const Person &other) const    {
//         return age >= other.age;
//     }

//     // Overloading the equal to operator (==)
//     bool operator == (const Person &other) const    {
//         return age == other.age;
//     }

//     // Overloading the not equal to operator (!=)
//     bool operator != (const Person &other) const    {
//         return age != other.age;
//     }
// };

// int main()
// {
//     Person person1("Alice", 25.5);
//     Person person2("Bob", 25.3);

//     if (person1 < person2)
//     {
//         std::cout << person1.name << " is younger than " << person2.name << std::endl;
//     }
//     else
//     {
//         std::cout << person1.name << " is older than or equal to " << person2.name << std::endl;
//     }

//     if (person1 != person2)
//     {
//         std::cout << person1.name << " and " << person2.name << " are different ages" << std::endl;
//     }
//     else
//     {
//         std::cout << person1.name << " and " << person2.name << " are the same age" << std::endl;
//     }

//     return 0;
// }