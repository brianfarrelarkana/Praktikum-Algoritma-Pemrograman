#include <iostream>

using namespace std;

int main()
{

    //Unguided 2 - Menghitung nilai faktorial menggunakan while

    int bilangan;

    cout << "Masukkan sebuah bilangan: "; cin >> bilangan;

    int faktorial = bilangan;
    cout << faktorial << "! = ";

    int hasil = 1;
    while (faktorial >= 1) {
        hasil = hasil * faktorial;
    if (faktorial != 1) {
        cout << faktorial << " x ";
    } else {
        cout << faktorial << " = ";
    }
        faktorial--;
    }
    cout << hasil;
    return 0;
}
