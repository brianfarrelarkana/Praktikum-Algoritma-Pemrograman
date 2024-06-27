#include <iostream>

using namespace std;

float r352;

float kel_ling352 (float r352) {
    float hasil352 = 3.14 * 2 * r352;
    return hasil352;
}
float luas_ling352 (float r352) {
    float hasil352 = 3.14 * r352 * r352;
    return hasil352;
}

int main()
{
    int pilihan352;

    do
    {
        cout << "=======================================" << endl;
        cout << "         Kalkulator Lingkaran"           << endl;
        cout << "=======================================" << endl;
        cout << "\n Silakan Pilih yang Akan Hitung :"     << endl;
        cout << " 1. Keliling Lingkaran"                  << endl;
        cout << " 2. Luas Lingkaran"                      << endl;
        cout << " 3. Keluar"                              << endl;
        cout << " Masukkan Pilihan Anda : "; cin >> pilihan352;

        switch (pilihan352)
        {
        case 1:
            cout << "\n Anda ingin menghitung keliling lingkaran" << endl;
            cout << " Silakan masukkan jari-jari lingkaran : "; cin >> r352;
            cout << " Keliling lingkaran                   = 3.14 * 2 * " << r352 << " = " << kel_ling352(r352) << endl;
            cout << endl;
            break;
        case 2:
            cout << "\n Anda ingin menghitung luas lingkaran" << endl;
            cout << " Silakan masukkan jari-jari lingkaran : "; cin >> r352;
            cout << " Luas lingkaran                       = 3.14 * " << r352 << " * " << r352 << " = " << luas_ling352(r352) << endl;
            cout << endl;
            break;
        case 3:
            cout << "\n Terima kasih karena telah menggunakan kalkulator lingkaram" << endl;
            break;
        }

    } while (pilihan352 < 3);

    return 0;
}
