#include <iostream>

using namespace std;

int main()
{
    int pilih1, pilih2;

    //Pilihan Pertama
    cout << " << MENU MENGHITUNG BIAYA OPERASI >>";
    cout << "\n 1. Hitung Biaya Operasi Mata";
    cout << "\n 2. Hitung Biaya Operasi Jantung";
    cout << "\n Masukkan Pilihan Anda : "; cin >> pilih1;

    //Fungsi If Else Pilihan Kedua
    if (pilih1 == 1) {
        cout << "\n\n JENIS PENYAKIT MATA :";
        cout << "\n 1. Katarak";
        cout << "\n 2. Plus/Minus";
        cout << "\n 3. Silinder";
        cout << "\n Masukkan Nomor Jenis Penyakit Mata : "; cin >> pilih2;

        switch (pilih2){
        case 1: cout << "\n Biaya Operasi Mata Katarak = Rp. 7.500.000";
        break;
        case 2: cout << "\n Biaya Operasi Mata Plus/Minus = Rp. 5.000.000";
        break;
        case 3: cout << "\n Biaya Operasi Mata Silinder = Rp. 4.000.000";
        break;
        default: cout << " Nomor yang anda inputkan salah";
        }
    }

    else if (pilih1 == 2) {
        cout << "\n\n JENIS PENYAKIT JANTUNG :";
        cout << "\n 1. Jantung Koroner";
        cout << "\n 2. Katup Jantung";
        cout << "\n 3. Otot Jantung";
        cout << "\n Masukkan Nomor Jenis Penyakit Jantung : "; cin >> pilih2;

        switch (pilih2){
        case 1: cout << "\n Biaya Operasi Jantung Koroner = Rp. 500.000.000";
        break;
        case 2: cout << "\n Biaya Operasi Katup Jantung = Rp. 350.000.000";
        break;
        case 3: cout << "\n Biaya Operasi Otot Jantung = Rp. 450.000.000";
        break;
        default: cout << " Nomor yang anda inputkan salah";
        }
    }

    else {
        cout << " Nomor yang anda inputkan salah";
    }

    return 0;
}
