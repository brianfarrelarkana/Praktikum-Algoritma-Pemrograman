#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int angka;
    char karakter;
    string kata;

    cout << "Silakan Input Angka    : ";
    cin >> angka;

    cout << "Silakan Input Karakter : ";
    cin >> karakter;

    cout << "Silakan Input Kata     : ";
    cin >> kata;

    cout << endl << "Data-data yang telah Anda input adalah : " << endl;
    cout << " - " << hex << angka << endl;
    cout << " - " << karakter << endl;
    cout << " - " << kata << endl;

    return 0;
}

