// #include <iostream>

// class Something{
// private:
//     static inline int s_value { 1 };

// public:
//     static int getValue() { return s_value; } // static member function
// };

// int main(){
//     std::cout << Something::getValue() << '\n';
// }

#include <iostream>

class IDGenerator{
private:
    static inline int s_nextID { 1 };

public:
     static int getNextID(); // 
};

int IDGenerator::getNextID() { 
    return s_nextID++; 
    }

int main(){
    for (int count{ 0 }; count < 5; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';

    return 0;
}

