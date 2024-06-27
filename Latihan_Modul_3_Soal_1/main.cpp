#include <iostream>

using namespace std;

int main()
{
    string huruf, vokal;
    vokal = "A", "I", "U", "E", "O";

    cout << "Silakan masukkan sebuah huruf : "; cin >> huruf;

    if (huruf == vokal) {
        cout << huruf << " adalah salah satu huruf vokal";
    }
    return 0;
}
