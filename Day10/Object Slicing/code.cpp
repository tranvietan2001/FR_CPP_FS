#include <iostream>
// Lớp cơ sở
class Base {
protected:
    int value;
public:
    Base(int v) : value(v) {}
    void print() const {
        std::cout << "Base value: " << value << std::endl;
    }
};

// Lớp dẫn xuất
class Derived : public Base {
private:
    int extraValue;
public:
    Derived(int v1, int v2) : Base(v1), extraValue(v2) {}

    void print() const {
        std::cout << "Derived value: " << value << ", Extra value: " << extraValue << std::endl;
    }
};
int main() {
    Derived derived(10, 20);
    derived.print();
    Base base = derived;
    base.print();
    return 0;
}


