// #include <iostream>

// class Counter {
// private:
//     int count;

// public:
//     Counter(int initialCount = 0) : count(initialCount) {}

//     // Counter& operator++() {  // Overloading prefix increment operator (++x)
//     //     count++;
//     //     return *this;
//     // }
//     // Counter operator++(int) {  // Overloading postfix increment operator (x++)
//     //     Counter temp(count);
//     //     count++;
//     //     return temp;
//     // }
//     // Counter& operator--() {  // Overloading prefix decrement operator (--x)
//     //     count--;
//     //     return *this;
//     // }
//     // Counter operator--(int) {  // Overloading postfix decrement operator (x--)
//     //     Counter temp(count);
//     //     count--;
//     //     return temp;
//     // }
//     int getCount() const {
//         return count;
//     }
// };

// int main() {    

//     Counter c(5);
//     std::cout << "Initial count: " << c.getCount() << std::endl;
//     ++c;  // prefix increment (++x)
//     std::cout << "After prefix increment: " << c.getCount() << std::endl;
//     Counter c2 = c++;  // postfix increment (x++)
//     std::cout << "After postfix increment: " << c.getCount() << std::endl;
//     std::cout << "Value before postfix increment: " << c2.getCount() << std::endl;
//     --c;  // prefix decrement (--x)
//     std::cout << "After prefix decrement: " << c.getCount() << std::endl;
//     Counter c3 = c--;  // postfix decrement (x--)
//     std::cout << "After postfix decrement: " << c.getCount() << std::endl;
//     std::cout << "Value before postfix decrement: " << c3.getCount() << std::endl;

//     return 0;
// }

