#include <iostream>

using namespace std;
//Guided 3 - if lebih dari dua kondisi
int main()
{
    int bilangan;
    cout << "Masukkan sebuah bilangan bulat yang akan diperiksa: "; cin >> bilangan;

    if (bilangan > 0) {
        cout << bilangan << " adalah bilangan POSITIF";
    } else if (bilangan < 0) {
        cout << bilangan << " adalah bilangan NEGATIF";
        } else {
            cout << bilangan << " adalah bilangan nol";
            }

    return 0;
}
