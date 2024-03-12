#include <iostream>

using namespace std;

class Base{
    private:
    protected:
        int m_value {};
    public:
        Base(int value): m_value { value }
        {}
        void mess() { cout << "Class Base" << endl; }
};

class Derived: public Base{
public:
    Derived(int value) : Base { value }
    {}
    void mess() { cout << "Class Derived!" << endl; }
    int getValue() { return m_value; }
};

int main(int argc, char const *argv[]){

    Base base {1};
    base.mess();

    Derived derived {2};
    derived.mess();

// Derived derived { 16 };
// cout << "Value - Class Derived: " << derived.getValue() << '\n';

    // Base base { 5 };
    // cout << "Value - Class Base:  " << base.getValue() << '\n';

    
    return 0;
}
