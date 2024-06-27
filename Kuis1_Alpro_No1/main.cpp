#include <iostream>

using namespace std;

int main()
{
    int data352;

    //Judul
    cout << "================= Program Penitipan Hewan =================" << endl;
    cout << "======================= PET CARE BFA ======================" << endl;

    //Input
    cout << "\n\n Input Jumlah Data Hewan yang Akan Dititipkan : "; cin >> data352;

    string nama352 [data352];
    string kode352 [data352];
    string jenis352 [data352];

    for (int x352 = 0; x352 < data352; x352++) {
        cout << "\n Data " << x352 + 1 << endl;
        cout << " Nama Hewan  " << x352 + 1 << " : "; cin >> nama352 [x352];
        cout << " Kode          : "; cin >> kode352 [x352];
        cout << " Jenis Hewan   : "; cin >> jenis352 [x352];
    }

    //Output
    cout << "\n\n       Daftar Data Hewan Peliharaan" << endl;
    cout << "==========================================" << endl;
    cout << " No.   Nama        Kode        Jenis      " << endl;
    cout << "==========================================" << endl;

    for (int x352 = 0; x352 < data352; x352++) {
        cout << " " << x352 + 1 << "     " << nama352 [x352] << "        " << kode352 [x352] << "      " << jenis352 [x352] << endl;
    }
    cout << "==========================================" << endl;

    return 0;
}
