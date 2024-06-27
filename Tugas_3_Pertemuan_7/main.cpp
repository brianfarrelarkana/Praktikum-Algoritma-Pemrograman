#include <iostream>

using namespace std;

float x352, y352;

float penjumlahan352 (float x352, float y352) {
    float hasil352 = x352 + y352;
    return hasil352;
}
float pengurangan352 (float x352, float y352) {
    float hasil352 = x352 - y352;
    return hasil352;
}
float perkalian352 (float x352, float y352) {
    float hasil352 = x352 * y352;
    return hasil352;
}
float pembagian352 (float x352, float y352) {
    float hasil352 = x352 / y352;
    return hasil352;
}
int pangkat352 (int x352, int y352) {
    int hasil352 = 1;
    for (int z352 = 1; z352 <= y352; z352++) {
        hasil352 = hasil352 * x352;
    }
    return hasil352;
}

int main()
{
    int pilihan352;

    do
    {
        cout << "=======================================" << endl;
        cout << "         Kalkulator Sederhana"           << endl;
        cout << "=======================================" << endl;
        cout << "\n Silakan Pilih Operasi Hitung :"       << endl;
        cout << " 1. Penjumlahan"                         << endl;
        cout << " 2. Pengurangan"                         << endl;
        cout << " 3. Perkalian"                           << endl;
        cout << " 4. Pembagian"                           << endl;
        cout << " 5. Pangkat"                             << endl;
        cout << " 6. Keluar"                              << endl;
        cout << " Masukkan Pilihan Anda : "; cin >> pilihan352;

        switch (pilihan352)
        {
        case 1:
            cout << "\n Anda memilih operasi hitung penjumlahan" << endl;
            cout << " Silakan masukkan bilangan pertama : "; cin >> x352;
            cout << " Silakan masukkan bilangan kedua   : "; cin >> y352;
            cout << " Hasil penjumlahan                 : " << x352 << " + " << y352 << " = " << penjumlahan352(x352, y352) << endl;
            cout << endl;
            break;
        case 2:
            cout << "\n Anda memilih operasi hitung pengurangan" << endl;
            cout << " Silakan masukkan bilangan pertama : "; cin >> x352;
            cout << " Silakan masukkan bilangan kedua   : "; cin >> y352;
            cout << " Hasil pengurangan                 : " << x352 << " - " << y352 << " = " << pengurangan352(x352, y352) << endl;
            cout << endl;
            break;
        case 3:
            cout << "\n Anda memilih operasi hitung perkalian" << endl;
            cout << " Silakan masukkan bilangan pertama : "; cin >> x352;
            cout << " Silakan masukkan bilangan kedua   : "; cin >> y352;
            cout << " Hasil perkalian                   : " << x352 << " * " << y352 << " = " << perkalian352(x352, y352) << endl;
            cout << endl;
            break;
        case 4:
            cout << "\n Anda memilih operasi hitung pembagian" << endl;
            cout << " Silakan masukkan bilangan pertama : "; cin >> x352;
            cout << " Silakan masukkan bilangan kedua   : "; cin >> y352;
            cout << " Hasil pembagian                   : " << x352 << " / " << y352 << " = " << pembagian352(x352, y352) << endl;
            cout << endl;
            break;
        case 5:
            cout << "\n Anda memilih operasi hitung pangkat" << endl;
            cout << " Silakan masukkan bilangan : "; cin >> x352;
            cout << " Silakan masukkan pangkat  : "; cin >> y352;
            cout << " Hasil pangkat             : " << x352 << "^" << y352 << " = " << pangkat352(x352, y352) << endl;
            cout << endl;
            break;
        case 6:
            cout << "\n Terima kasih karena telah menggunakan kalkulator sederhana" << endl;
            break;
        }

    } while (pilihan352 < 6);

    return 0;
}
