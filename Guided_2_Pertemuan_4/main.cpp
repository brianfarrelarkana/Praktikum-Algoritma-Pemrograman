#include <iostream>

using namespace std;
//Guided 2 - if dua kondisi
int main()
{
    int bilangan;
    cout << "Masukkan sebuah bilangan bulat yang akan diperiksa: "; cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap";
    } else {
        cout << bilangan << " adalah bilangan ganjil";
        }

    return 0;
}
