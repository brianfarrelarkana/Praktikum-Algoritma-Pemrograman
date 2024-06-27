#include <iostream>

using namespace std;

int main()
{
    int lot352, harga352, hasil352;

    cout << " Program Menghitung Broker Fee\n";
    cout << "-------------------------------\n";

    cout << "\n Masukkan jumlah lot  : "; cin >> lot352;
    cout << " Masukkan harga saham : "; cin >> harga352;

    hasil352 = lot352 * harga352 * 0.08;

    cout << "\n Biaya Broker yang harus dibayar sebesar : " << hasil352;
    return 0;
}
