#include <iostream>

using namespace std;

void tampil_ips352 (double ips352[], int panjang352){
    for (int a352 = 0; a352 < panjang352; a352++){
        cout << ips352[a352] << "   ";
    }
    cout << endl;
}

void sel_sort352 (double ips352[], int panjang352){
    double sem352;
    int minimum352;

    for (int x352 = 0; x352 < panjang352; x352++){
        minimum352 = x352;
        for (int y352 = x352 + 1; y352 < panjang352; y352++){
            if (ips352[y352] > ips352[minimum352]){
                minimum352 = y352;
            }
        }
        sem352 = ips352[x352];
        ips352[x352] = ips352[minimum352];
        ips352[minimum352] = sem352;
    }
}

int main()
{
    double ips352[5] = {3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "IPS mahasiswa sebelum diurutkan dari terbesar hingga terkecil : " << endl;
    tampil_ips352(ips352, 5);

    sel_sort352(ips352, 5);

    cout << "\nIPS mahasiswa setelah diurutkan dari terbesar hingga terkecil : " << endl;
    tampil_ips352(ips352, 5);

    return 0;
}
