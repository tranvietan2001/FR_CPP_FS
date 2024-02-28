#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 10;
    int n = 5;
    int& r = i;
    // int& r = n; // error
    cout << "i: \t" << i << endl;
    cout << "r: \t" << i << endl;

    r = 5;

    cout << "i_: \t" << i << endl;
    cout << "r_: \t" << i << endl;

    // int x = 140;
    // cout << "i_: \t" << x << endl;
    // cout << "r_: \t" << &x << endl;

    return 0;
}
