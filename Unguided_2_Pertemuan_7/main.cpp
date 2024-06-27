#include <iostream>

using namespace std;

int s;

void luas_keliling_persegi () {

    cout << " Masukkan panjang sisi persegi : "; cin >> s;

    int luas;
    luas = s*s;

    int keliling;
    keliling = s*4;

    cout << "\n Luas Persegi = " << luas << endl;
    cout << " Keliling Persegi = " << keliling << endl;

}

int main()
{
    luas_keliling_persegi();

    return 0;
}
