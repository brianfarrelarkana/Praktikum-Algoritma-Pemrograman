#include <iostream>

using namespace std;

int main()
{
    int y352, a352, b352, c352;

    //Input Data
    cout << " Masukkan 3 digit angka terakhir pada NIM     : " << endl;
    cout << "\n Digit pertama dari 3 angka terakhir pada NIM : "; cin >> a352;
    cout << " Digit kedua dari 3 angka terakhir pada NIM   : "; cin >> b352;
    cout << " Digit ketiga dari 3 angka terakhir pada NIM  : "; cin >> c352;

    //Rumus
    y352 = a352 + b352 * c352;

    //If Statement untuk Output Data
    if (y352 == 25) {
        cout << "\n " << y352 << endl;
        cout << "\n Cukup sama baik" << endl;
    } else if (y352 == 26) {
        cout << "\n " << y352 << endl;
        cout << "\n Cukup sama baik" << endl;
    } else if (y352 >= 20 && y352 != 25 && y352 != 26) {
        cout << "\n " << y352 << endl;
        cout << "\n Sangat baik sekali" << endl;
    } else if (y352 < 20 && y352 != 25 && y352 != 26) {
        cout << "\n " << y352 << endl;
        cout << "\n Baik sekali" << endl;
    }
    return 0;
}
