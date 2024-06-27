#include <iostream>

using namespace std;

int main()
{
    int nomor;
    string bulan[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    cout << " Masukkan Nomor Bulan (1-12) : "; cin >> nomor;
    cout << " Nama bulan dari nomor yang anda masukkan adalah bulan " << bulan[nomor-1] << endl;

    return 0;
}
