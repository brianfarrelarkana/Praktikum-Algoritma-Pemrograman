#include <iostream>

using namespace std;

void tampil_nama352 (string nama352[], int panjang352){
    for (int a352 = 0; a352 < panjang352; a352++){
        cout << nama352[a352] << "  ";
    }
    cout << endl;
}

void bub_sort352 (string nama352[], int panjang352){
    bool belum352 = true;
    int x352 = 0;
    string sem352;

    while (belum352){
        belum352 = false;
        x352++;
        for (int y352 = 0; y352 < panjang352 - x352; y352++){
            if (nama352[y352] > nama352[y352+1]){
                sem352 = nama352[y352];
                nama352[y352] = nama352[y352+1];
                nama352[y352+1] = sem352;
                belum352 = true;
            }
        }
    }
}

int main()
{
    string nama352[10] = {"Siti", "Situ", "Sana", "Ana", "Ani", "Caca", "Cici", "Dilda", "Dodo", "Dadi"};

    cout << "Nama orang yang dicari pak RT sebelum di sorting : " << endl;
    tampil_nama352(nama352, 10);

    bub_sort352(nama352, 10);

    cout << "\nNama orang yang dicari pak RT setelah di sorting : " << endl;
    tampil_nama352(nama352, 10);

    return 0;
}
