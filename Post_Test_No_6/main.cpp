#include <iostream>

using namespace std;

int main()
{
    int kota352, kelas352;

    cout << "========================\n";
    cout << "    TIKET KERETA API\n";
    cout << "========================\n\n";

    cout << " KOTA TUJUAN :\n";
    cout << " 1. Jakarta\n";
    cout << " 2. Semarang\n";
    cout << " 3. Yogyakarta\n";

    cout << "\n Masukkan kota tujuan : "; cin >> kota352;

    switch (kota352){
    case 1:
        cout << "\n 1. Ekonomi\n";
        cout << " 2. Eksekutif\n";
        cout << " Pilih Kelas : "; cin >> kelas352;

        if (kelas352 = 1){
            cout << "\n Kota Tujuan : Jakarta\n";
            cout << " Kereta      : Ekonomi\n";
            cout << " Harga Tiket : 85000";
        } else if (kelas352 = 2){
            cout << "\n Kota Tujuan : Jakarta\n";
            cout << " Kereta      : Eksekutif\n";
            cout << " Harga Tiket : 205000";
        } else {
            cout << " Inputan anda salah";
        }
        break;

    case 2:
        cout << "\n 1. Ekonomi\n";
        cout << " 2. Eksekutif\n";
        cout << " Pilih Kelas : "; cin >> kelas352;

        if (kelas352 = 1){
            cout << "\n Kota Tujuan : Semarang\n";
            cout << " Kereta      : Ekonomi\n";
            cout << " Harga Tiket : 95000";
        } else if (kelas352 = 2){
            cout << "\n Kota Tujuan : Semarang\n";
            cout << " Kereta      : Eksekutif\n";
            cout << " Harga Tiket : 252000";
        } else {
            cout << " Inputan anda salah";
        }
        break;

    case 3:
        cout << "\n 1. Ekonomi\n";
        cout << " 2. Eksekutif\n";
        cout << " Pilih Kelas : "; cin >> kelas352;

        if (kelas352 = 1){
            cout << "\n Kota Tujuan : Yogyakarta\n";
            cout << " Kereta      : Ekonomi\n";
            cout << " Harga Tiket : 55000";
        } else if (kelas352 = 2){
            cout << "\n Kota Tujuan : Yogyakarta\n";
            cout << " Kereta      : Eksekutif\n";
            cout << " Harga Tiket : 100000";
        } else {
            cout << " Inputan anda salah";
        }
        break;

    }

    return 0;
}
