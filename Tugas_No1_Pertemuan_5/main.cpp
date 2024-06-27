#include <iostream>

using namespace std;

int main()
{

    int bilangan;

    cout << "Masukkan sebuah bilangan: "; cin >> bilangan;
    cout << "Total Nilai = ";

    int hasil = 0;
    while (bilangan >= 1) {
        hasil = hasil + bilangan;
    if (bilangan != 1) {
        cout << bilangan << " + ";
    } else {
        cout << bilangan << " = ";
    }
        bilangan--;
    }
    cout << hasil;
    return 0;
}
