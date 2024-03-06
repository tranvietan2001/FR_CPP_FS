#include <iostream>
#include "func.h"
using namespace std;
 
int Rectangle::calculateArea() {
    return width * height;
}
int Rectangle::calculatePerimeter() {
    return 2 * (width + height);
}
void Rectangle::display() {
    cout << "chieu rong: " << width << endl;
    cout << "cheu cao: " << height << endl;
    cout << "dien tich S:  " << calculateArea() << endl;
    cout << "Chu vi C: " << calculatePerimeter() << endl;
}

