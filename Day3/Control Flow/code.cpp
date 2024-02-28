#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number = 10;

    // if (number > 5)  cout << "Number is greater than 5" << endl;
    // else cout << "Number is less than or equal to 5" << endl;

    for (int i = 0; i < 5; i++) 
        cout << i << endl;
    
    int x = 0;
    cout << "WHILE" << endl;
    while (x <= 5) {
        cout << x << " ";
        x++;
    }

    x = 0;
    cout << "\nDo - WHILE" << endl;
    do {
        cout << x << " ";
        x++;
    } while (x <= 5);

    cout << "\nBREAK" << endl;
    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
    }

    cout << "\nCONTINUE" << endl;
    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << i << " ";
    }

    // cout << "\nRETURN" << endl;
    // for (int i = 0; i <= 5; i++) {
    //     if (i == 3) {
    //         return 0;
    //     }
    //     cout << i << " ";
    // }



    
    // while(true) cout << " loop with while (true)" << endl;
    // for (;;) cout << " loop with for (;;)" << endl;

    cout << "\n SWITCH - CASE" << endl;
    int day;

    // cout << "Enter a number (1-7): ";
    // cin >> day;
    day = 5;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
    
    return 0;
}
