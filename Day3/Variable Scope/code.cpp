#include<iostream>

using namespace std;

int g_a = 5;

void fun(){
    int s_a  = 20;
    g_a = g_a + 5;
    cout << "s_a in fun: " << s_a <<endl;
}

int staticVar(){
    static int s_v = 0;
    return s_v ++;
}

int main(int argc, char const *argv[]){
    int s_a = 10;
    cout << "g_a in main: " << g_a <<endl;
    cout << "s_a in main: " << s_a <<endl;
    fun();
    cout << "g_a in fun: " << g_a <<endl;

    cout << "staticVar fun [0]: " << staticVar() <<endl;
    cout << "staticVar fun [1]: " << staticVar() <<endl;
    cout << "staticVar fun [2]: " << staticVar() <<endl;
    return 0;
}
