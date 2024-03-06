#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    //constructor để khởi tạo đối tượng "Rectangle" 
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int calculateArea() {
        return width * height;
    }

    int calculatePerimeter() {
        return 2 * (width + height);
    }

    void display() {
        cout << "chieu rong: " << width << endl;
        cout << "cheu cao: " << height << endl;
        cout << "dien tich S:  " << calculateArea() << endl;
        cout << "Chu vi C: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect(5, 3);
    rect.display();

    return 0;
}