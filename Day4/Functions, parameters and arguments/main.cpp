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
    return 0;
}
