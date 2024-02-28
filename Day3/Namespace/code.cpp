#include<iostream>
using namespace std;


namespace p1{
    int a = 10;
    void name(){
        cout << "p1: AN " << endl;
    }
    int old(int i){
        return i;
    }
}

namespace p2{
    int a= 20;
    void name(){
        cout << "p2: ANH " << endl;
    }
    int old(int i){
        return i;
    }
}

namespace person {
    int old(int i){
        return i;
    }

    namespace p_VN{
        void detail(){
            cout << "Viet Nam da vang" << endl;
        }
    }

    namespace p_USA{
        void detail(){
            cout << "USA da trang" << endl;
        }
    }
}

using namespace p1;
using namespace person::p_VN;

int main(int argc, char const *argv[])
{
    p1::name();
    cout<< "old: " << p1::old(14) << endl;
    p2::name();
    cout<< "old: " << p2::old(45) << endl;

    cout<< "---------------------"<< endl;

    cout<< "Person VietNam: ";
    person::p_VN::detail();
    cout<< "Person USA: ";
    person::p_USA::detail();

    cout<< "---------------------"<< endl;

    cout<< "USING"<< endl;
    name();
    cout<< "old: " << old(14) << endl;
    detail();
    

    return 0;
}
