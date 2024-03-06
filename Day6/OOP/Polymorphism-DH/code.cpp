#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Vẽ hình" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Vẽ hình chữ nhật" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Vẽ hình tròn" << endl;
    }
};

int main() {
    Shape* shapePtr;

    shapePtr = new Rectangle();
    shapePtr->draw(); // Output: Vẽ hình chữ nhật

    shapePtr = new Circle();
    shapePtr->draw(); // Output: Vẽ hình tròn

    delete shapePtr;

    return 0;
}