#include <iostream>
#include <bitset>

using namespace std;

// Hàm chuyển đổi độ mã ASCII thành chuỗi nhị phân
string asciiToBinary(int ascii) {
    string binary = bitset<4>(ascii).to_string();
    return binary;
}

int main(int argc, char const *argv[]){
    //Arithmetic Operators ||toan tu so hoc
    int x = 10, y = 15;
    cout << "x = " << x << "\ty = " << y << endl;
    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << endl;
    cout << "x % y = " << (x % y) << endl;
    cout << "x ++ = " << (x ++) << endl;
    cout << "x -- = " << (x --) << endl;

    cout << "========================" << endl;

    int a = 0, b = 0;
    //Relational Operators || toan tu quan he
    // == ; != ; < ; > ; <= ; >=

    //Logical Operators    || toan tu logic
    cout << "a && b : " << (a && b) << endl;        // && is AND => if (a AND B) != 0 ==> TRUE  <> FALSE
    cout << "a || b : " << (a || b) << endl;        // || is OR  => if (a OR B)  != 0 ==> TRUE <> FALSE
    cout << "! (a && b)  : " << !(a && b) << endl;  // !  is NOT => !(TRUE) => FALSE <> TRUE

    // Bitwise Operators
    cout << "========================" << endl;
    
    int z = 12 ; // 1100
    int w = 5  ; // 0101
    // cout << "z: " << z << endl;
    // cout << "w: " << w << endl;
    cout << "z: \t\t" << asciiToBinary(static_cast<int>(z)) << endl;
    cout << "w: \t\t" << asciiToBinary(static_cast<int>(w)) << endl;    

    cout << "z & w : \t" << asciiToBinary(static_cast<int>(z & w)) << endl;
    cout << "z | w : \t" << asciiToBinary(static_cast<int>(z | w)) << endl;
    cout << "z ^ w : \t" << asciiToBinary(static_cast<int>(z ^ w)) << endl;
    cout << "z >> 1 : \t" << asciiToBinary(static_cast<int>(z >> 1)) << endl;
    cout << "z << 1 : \t" << asciiToBinary(static_cast<int>(z << 1)) << endl;
    cout << "~ z : \t\t" << asciiToBinary(static_cast<int>(~z)) << endl;

    // = , +=, -=, *=, /=, <<=, &=,.....


    return 0;
}
