// #include <iostream>
// using namespace std;

// class Base{
//     private:
//         int m_value {};
//     protected:
//         void printValue() const { cout << m_value; }
//     public:
//         Base(int value): m_value { value }
//         { }
        
// };

// class Derived: public Base{
// public:
//     Derived(int value): Base { value }
//     {}
//     using Base::printValue;
// };
    

// int main(int argc, char const *argv[])
// {
//     Base base {1};

//     base.printValue();

//     // Derived derived {1};
//     // derived.printValue();
//     return 0;
// }



#include <iostream>

class Base{
public:
	int m_value{};
};

class Derived : public Base{
private:
	using Base::m_value;

public:
	Derived(int value) : Base { value }
	{}
};

int main(){
	Derived derived{ 7 };
	
	Base& base{ derived };
	std::cout << base.m_value; // okay: m_value is public in Base

	return 0;
}


// #include <iostream>
// class Base{
// private:
// 	int m_value {};

// public:
// 	Base(int value)
// 		: m_value { value }
// 	{}

// 	int getValue() const { return m_value; }
// };

// class Derived : public Base{
// public:
// 	Derived(int value)
// 		: Base { value }
// 	{}

// 	int getValue() const = delete; 
// };

// int main(){
// 	Derived derived { 7 };

// 	std::cout << derived.getValue();
// 	return 0;
// }