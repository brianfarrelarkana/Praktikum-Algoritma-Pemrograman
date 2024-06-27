#include <iostream>

using namespace std;

int main()
{
    int tinggi352, panjang352, alas352, luas352;

    //Input Data
    cout << " Masukkan nilai panjang : "; cin >> panjang352;
    cout << " Masukkan nilai alas    : "; cin >> alas352;
    cout << " Masukkan nilai luas    : "; cin >> luas352;

    //Rumus dan Hasil Perhitungan
    tinggi352 = panjang352 + alas352 + luas352;
    cout << "======================================" << endl;
    cout << " Nilai tinggi           : " << tinggi352 << endl;
    cout << "======================================" << endl;

    //Output Segitiga Bintang Siku-Siku
    for (int x352 = 1; x352 <= tinggi352; x352++) {
        for (int y352 = 1; y352 < x352; y352++) {
            cout << " ";
        }
        for (int z352 = tinggi352; z352 >= x352; z352--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
