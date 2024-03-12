// #include <iostream>  
// using namespace std;  
// class NhanVien { 
//     int msnv;    
//     string ten;
//     int tuoi;
//     public:  
//        NhanVien(int msnv, string ten, int tuoi) {  
//             cout << "Trong ham xay dung: " << endl;
//             cout << "   msnv: " << msnv << endl;
//             cout << "   ten: " << ten << endl;
//             cout << "   Tuoi: " << tuoi << endl;
//             msnv = msnv;    
//             ten = ten;    
//             tuoi = tuoi; 
//        }    
//        void HienThi() {
//             cout << "Ham in thong tin cua doi tuong nhan vien: " << endl;
//             cout << ten << endl;
//             cout << "   Ma so nhan vien: " << msnv << endl;
//             cout << "   Tuoi: " << tuoi << endl;
//        }    
// };  
   
// int main() {  
//     NhanVien n1 =  NhanVien(111231, "Nguyen Van A", 25);    
//     n1.HienThi();    
//     return 0;  
// }


#include <iostream>  
using namespace std;  
class NhanVien { 
    int msnv;    
    string ten;
    int tuoi;
    public:  
       NhanVien(int msnv, string ten, int tuoi) {  
            cout << "Trong ham xay dung: " << endl;
            cout << "   msnv: " << msnv << endl;
            cout << "   ten: " << ten << endl;
            cout << "   Tuoi: " << tuoi << endl;
            this->msnv = msnv;    
            this->ten = ten;    
            this->tuoi = tuoi; 
       }    
       void HienThi() {
            cout << "Ham in thong tin cua doi tuong nhan vien: " << endl;
            cout << ten << endl;
            cout << "   Ma so nhan vien: " << msnv << endl;
            cout << "   Tuoi: " << tuoi << endl;
       }    
};  
   
int main() {  
    NhanVien n1 =  NhanVien(111231, "Nguyen Van A", 25);    
    n1.HienThi();    
    return 0;  
}