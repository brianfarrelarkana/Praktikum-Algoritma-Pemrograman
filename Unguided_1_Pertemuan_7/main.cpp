#include <iostream>

using namespace std;

int s;

int kel_persegi (int x) {
    int keliling = x*4;

    return keliling;
}

int luas_persegi (int y) {
    int luas = y*y;

    return luas;
}

int main()
{
    cout << " Masukkan panjang sisi persegi : "; cin >> s;

    cout << "\n Keliling Persegi = " << kel_persegi(s) << endl;
    cout << " Luas Persegi = " << luas_persegi(s) << endl;

    return 0;
}
