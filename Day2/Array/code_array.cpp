#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6};
    int *p = arr;
    int i = 0;
    for(i = 0; i <6; i++)
        cout << "arr: \t" << arr[i] << endl;
    for(i = 0; i < 6; i++)
        cout << "*p: \t" << *(p+i)<< endl;
    for(i = 0; i < 6; i++)
        cout << "p: \t" << &p[i]<< endl;
    // cout << "r_: \t" << p << endl;
    return 0;
}
