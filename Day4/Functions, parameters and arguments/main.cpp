#include <iostream>
using namespace std;

void mess(){
    cout << "================" << endl;
}

int max (int a, int b){
    return a >= b ? a : b ;
}

void printInfo(string name, int age = 0, string address = "Unknow"){
    cout << "Name: " << name<< endl;
    cout << "Agr: " << age<< endl;
    cout << "Address: " <<address << endl;
}

// int  fun (int p){
//     p = 30;
//     return p;
// }
void fun(int p){
    p = 30;
}
void fun1(int *p){
    *p = 30;    
}

int main(int argc, char const *argv[]){
    mess();
    int val = max(123, 5);
    cout << "max : " << val << endl;
    mess();

    printInfo("AnTV15");
    mess();
    printInfo("AnhTT119", 20);
    mess();
    printInfo("ManhTT01", 24, "DaNang");
    mess();

    int z = 20;
    fun(z);
    cout<< "z: " << z << endl;
    fun1(&z);
    cout<< "z: " << z << endl;  
    return 0;
}
