#define TEST "Hello FPT"

#include <iostream>

using namespace std;

int max(int a, int b){
    if (a>=b) return a;
    else return b;
}

int main(int argc, char const *argv[])
{
    cout << TEST << endl; 
    cout << max(20,5) << endl; 
    return 0;
}
