#include <iostream>

using namespace std;

void ori352 (char arr352[], int panjang352){
    for (int a352=0; a352 < panjang352; a352++){
        cout << arr352[a352] << " ";
    }
    cout << endl;
}


void asc352(char arr352[], int panjang352){
    int x352,y352,sem352;
    for (x352 = 1; x352 < panjang352; x352++){
        y352=x352;
        while (y352 > 0 && arr352[y352] < arr352[y352-1]){
            sem352= arr352[y352];
            arr352[y352] = arr352[y352-1];
            arr352[y352-1] = sem352;
            y352--;
        }
    }
}

void desc352(char arr352[], int panjang352){
    int x352,y352,sem352;
    for (x352 = 1; x352 < panjang352; x352++){
        y352=x352;
        while (y352 > 0 && arr352[y352] > arr352[y352-1]){
            sem352= arr352[y352];
            arr352[y352] = arr352[y352-1];
            arr352[y352-1] = sem352;
            y352--;
        }
    }
}

int main()
{
    int jml_input352;

    cout << " Berapa jumlah karakter yang akan anda masukkan? "; cin >> jml_input352;

    char arr352 [jml_input352];

    for (int nomor352 = 0; nomor352 < jml_input352; nomor352++){
        cout << " Masukkan karakter ke-" << nomor352+1 << " : "; cin >> arr352[nomor352];
    }

    cout << "\n Urutan karakter sebelum di sorting                   : "; ori352(arr352, jml_input352); asc352(arr352, jml_input352);

    cout << "\n Urutan karakter setelah di sorting secara ascending  : "; ori352(arr352, jml_input352); desc352(arr352, jml_input352);

    cout << "\n Urutan karakter setelah di sorting secara descending : "; ori352(arr352, jml_input352);

    return 0;
}
