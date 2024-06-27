#include <iostream>

using namespace std;

int main()
{
    int nim;

    cout << "Segitiga Bintang Siku-Siku" << endl;
    cout << "\nMasukkan NIM untuk jumlah bintang di pola segitiga siku-siku : "; cin >> nim;

     cout << "\nPola A :" << endl;

    for (int i = 1; i <= nim; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

     cout << "\nPola B :" << endl;

    for (int i = 0; i <= nim; i++) {
        for (int j = nim; j > i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola C :" << endl;

    for (int i = 1; i <= nim; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = nim; k >= i; k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola D :" << endl;

    for (int i = 1; i <= nim; i++) {
        for (int j = nim; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
