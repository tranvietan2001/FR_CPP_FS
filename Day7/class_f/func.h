#ifndef FUNC_H
#define FUNC_H

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
    int calculateArea() ;
    int calculatePerimeter() ;
    void display() ;
};
 
#endif




