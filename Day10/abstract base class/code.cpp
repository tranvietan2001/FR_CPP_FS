#include <iostream>

// Lớp cơ sở trừu tượng
class Shape {

    public:
        // Hàm ảo thuần túy để tính diện tích hình
        virtual float getArea() const = 0;

        // Hàm ảo thuần túy để tính chu vi hình
        virtual float getPerimeter();

        // Hàm ảo có thể được triển khai
        virtual void getNameShape(){
            std::cout << "Shape - ???" << std::endl;
        }
};

// Lớp dẫn xuất từ lớp cơ sở
class Rectangle : public Shape {
    private:
        float length;
        float width;

    public:
        Rectangle(float l, float w) : length(l), width(w) {}

        float getArea() const override {
            return length * width;
        }

        float getPerimeter() const override {
            return 2 * (length + width);
        }
};

// Lớp dẫn xuất khác từ lớp cơ sở
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float getArea() const override {
        return 3.14 * radius * radius;
    }

    float getPerimeter() const override {
        return 2 * 3.14 * radius;
    }
};

int main() {
    // Khởi tạo đối tượng Rectangle và gọi hàm tính diện tích và chu vi
    Rectangle rectangle(5, 3);
    std::cout << "Rectangle Area: " << rectangle.getArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.getPerimeter() << std::endl;

    // Khởi tạo đối tượng Circle và gọi hàm tính diện tích và chu vi
    Circle circle(2);
    std::cout << "Circle Area: " << circle.getArea() << std::endl;
    std::cout << "Circle Perimeter: " << circle.getPerimeter() << std::endl;

    return 0;
}