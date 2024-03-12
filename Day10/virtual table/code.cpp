#include <iostream>

class Base{
public:
    // VirtualTable* __vptr;
    virtual void function1() {};
    virtual void function2() {};
};

class D1: public Base{
public:
    void function1() override {
        std::cout << "F1 in D1" << std::endl 
    };
};

class D2: public Base{
public:
    void function2() override {};
};

int main(int argc, char const *argv[]){
    
    D1 d1 {};
    Base* dPtr = &d1;
    return 0;
}

