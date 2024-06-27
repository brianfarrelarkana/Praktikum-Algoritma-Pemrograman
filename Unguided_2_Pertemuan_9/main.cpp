#include <iostream>

using namespace std;

int binary_Search(char arr[], int x, char y) {
    int kiri, kanan, tengah;
    kiri = 0;
    kanan = x;
    int posisi = -1;

    while (kiri <= kanan)
    {
        tengah = (kanan + kiri)/2;

        if (y == arr[tengah]) {
            posisi = tengah;
            break;
        } else if (y < arr[tengah]) {
            kanan = tengah-1;
        } else if (y > arr[tengah]) {
            kiri = tengah+1;
        }
    }

    return posisi;

}

int main() {

    char huruf[5] = {'a', 'b', 'i', 'n', 'r'};
    int indeks_ketemu;
    char dicari;

    cout << " Masukkan huruf yang ingin dicari : "; cin >> dicari;

    indeks_ketemu = binary_Search(huruf, 5, dicari);

    if (indeks_ketemu != -1)
    {
        cout << " " << dicari << " ditemukan pada indeks " << indeks_ketemu << endl;
    } else {
        cout << " " << dicari << " tidak ditemukan" << endl;
    }

    return 0;
}
