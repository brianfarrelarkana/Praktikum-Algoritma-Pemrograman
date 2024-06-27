#include <iostream>

using namespace std;

int main()
{
    float alas, tinggi, luas;

    //Intro

    cout << "Selamat datang di kalkulator penghitung luas segitiga" << endl;
    cout << "" << endl;

    //Input Data

    cout << "Silakan masukkan nilai alas segitiga   : ";
    cin >> alas;

    cout << "Silakan masukkan nilai tinggi segitiga : ";
    cin >> tinggi;
    cout << "" << endl;

    //Output Data

    cout << "Luas = " << alas << " * " << tinggi << " * 0.5" << endl;
    cout << "Luas = " << (alas * tinggi * 0.5) << endl;
    cout << "" << endl;

    //Outro

    cout << "Terima kasih karena telah menggunakan kalkulator penghitung luas segitiga" << endl;
    cout << "" << endl;
    cout << "Made by : Brian Farrel Arkana" << endl;
    cout << "          2211102352" << endl;
    cout << "          S1IF-10-H" << endl;

    return 0;
}
