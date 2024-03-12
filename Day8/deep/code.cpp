//https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/

// C++ program for the above approach
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;
	int breadth;
	int height;

public:
	// Function that sets the dimensions
	void set_dimensions(int length1, int breadth1,
						int height1)
	{
		length = length1;
		breadth = breadth1;
		height = height1;
	}

	// Function to display the dimensions
	// of the Box object
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << breadth
			<< "\n Height = " << height
			<< endl;
	}
};

// Driver Code
int main()
{
	// Object of class Box
	box B1, B3;

	// Đặt kích thước của Hộp B1
    cout<< "B1" <<endl;
	B1.set_dimensions(14, 12, 16);
	B1.show_data();
    cout<< "-----------------" <<endl;

    // Khi sao chép dữ liệu của đối tượng
    // tại thời điểm khởi tạo
    // sau đó việc sao chép được thực hiện thông qua
	// COPY CONSTRUCTOR
    cout<< "B2" <<endl;
	box B2 = B1;
	B2.show_data();
    cout<< "-----------------" <<endl;

    // Khi sao chép dữ liệu của đối tượng
    // sau khi khởi tạo thì
    // sao chép được thực hiện thông qua DEFAULT
	// ASSIGNMENT OPERATOR
    cout<< "B3" <<endl;
	B3 = B1;
	B3.show_data();
    cout<< "-----------------" <<endl;
	return 0;
}
