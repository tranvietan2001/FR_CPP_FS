#include <iostream>

int main() {
    // Khai báo biến trên stack
    int stackVariable = 5;
    std::cout << "Stack variable: " << stackVariable << std::endl;

    // Cấp phát động một biến trên heap
    int a = 10;
    int *heapVariable = new int(a);
    std::cout << "Heap variable: " << *heapVariable << std::endl;

    // Giải phóng bộ nhớ đã được cấp phát trên heap
    delete heapVariable;

    // int* mallocPtr = (int*)malloc(sizeof(int));   // Cấp phát động một biến kiểu int trên heap
    // free(mallocPtr);  // Giải phóng bộ nhớ đã được cấp phát bởi malloc

    // int* a;
    // int *a;

    return 0;
}