#include <iostream>

using namespace std;

int main()
{
    int jml1352, jml2352;

    cout << " Masukkan jumlah array pertama : "; cin >> jml1352;

    int bil1352[jml1352];

    cout << "\n Masukkan element pada array pertama\n";

    for (int a352 = 0; a352 < jml1352; a352++){
        cout << " Element ke-" << a352+1 << " : "; cin >> bil1352[a352];
    }

    cout << "\n Masukkan jumlah array kedua : "; cin >> jml2352;

    int bil2352[jml2352];

    for (int x352 = 0; x352 < jml2352; x352++){
        cout << " Element ke-" << x352+1 << " : "; cin >> bil2352[x352];
    }

    cout << "\n Hasil array pertama dan kedua setelah digabung\n";
    for (int a352 = 0; a352 < jml1352; a352++){
        cout << " " << bil1352[a352];
    }
    for (int x352 = 0; x352 < jml2352; x352++){
        cout << " " << bil2352[x352];
    }

    return 0;
}
