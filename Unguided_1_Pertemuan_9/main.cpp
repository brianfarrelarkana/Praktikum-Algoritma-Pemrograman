#include <iostream>

using namespace std;

int sequential_Search(double arr[], int x, double kunci){
    for (int a = 0; a < x; a++){
        if (arr[a] == kunci){
            return a;
        }
    }
    return -1;
}

int main()
{
    double angka[5] = {1.5, 2.6, 6.7, 9.3, 8.4};
    int indeks_ketemu;
    double dicari;

    cout << " Masukkan angka yang ingin dicari : ";
    cin >> dicari;

    indeks_ketemu = sequential_Search(angka, 5, dicari);

    if (indeks_ketemu != -1){
        cout << " " << dicari << " ditemukan pada indeks " << indeks_ketemu << endl;
    } else {
        cout << " " << dicari << " tidak ditemukan" << endl;
    }

    return 0;
}

