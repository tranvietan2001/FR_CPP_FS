// #include <iostream>

// int generateID(){
//     static int s_id{ 0 }; // static local variable
//     return ++s_id;
//     // return s_id++;
// }

// int main(){
//     std::cout << generateID() << '\n';
//     std::cout << generateID() << '\n';
//     std::cout << generateID() << '\n';

//     return 0;
// }
#include <iostream>
using namespace std;

class MyClass {
public:
    static int count; // Khai báo static member variable

    MyClass() {
        count++; // Tăng giá trị của count mỗi khi tạo một đối tượng
    }
};

int MyClass::count = 0; // Khởi tạo static member variable

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    cout << "Tong so doi tuong: " << MyClass::count << endl;

    return 0;
}