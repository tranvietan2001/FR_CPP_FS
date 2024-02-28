#include<iostream>

using namespace std;

int g_a = 5;

void fun(){
    int s_a  = 20;
    g_a = g_a + 5;
    cout << "s_a in fun: " << s_a <<endl;
}

int main(int argc, char const *argv[]){
    int s_a = 10;
    cout << "g_a in main: " << g_a <<endl;
    cout << "s_a in main: " << s_a <<endl;
    fun();
    cout << "g_a in fun: " << g_a <<endl;
    return 0;
}
