#include <iostream>

using namespace std;

int main()
{
    int nomor;

    cout << " Masukkan jumlah nama mahasiswa yang akan di inputkan : "; cin >> nomor;

    string nama[nomor];

    for (int angka = 0; angka < nomor; angka++) {
        cout << " Nama ke - " << angka+1 << " : "; cin >> nama[angka];
    }

    cout << "\n Nama mahasiswa yang sudah di simpan adalah:" << endl;
    for (int angka = 0; angka < nomor; angka++) {
        cout << " " << nama[angka] << endl;
    }

    return 0;
}
