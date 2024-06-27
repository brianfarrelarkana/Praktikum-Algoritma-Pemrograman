#include <iostream>

using namespace std;

//YANG LEBIH SIMEL
int sequentialsearch (int arr[], int n, int kunciPencarian)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == kunciPencarian){
            return i; // i = nilai indeks
        }
    }
    return -1;
}

int main()
{
    int angka[] = {1,5,7,2,3,9}; //array + elemen
    int n = 6; // jumlah data
    int idx_ditemukan; // posisi
    int yangDicari; // k = key

    cout << "Masukkan angka yang ingin dicari : ";
    cin >> yangDicari;

    idx_ditemukan = sequentialsearch(angka, n, yangDicari);

    if (idx_ditemukan != -1)
    {
        cout << yangDicari << " ditemukan pada indeks " << idx_ditemukan << endl;
    } else {
        cout << yangDicari << " tidak ditemukan" << endl;
    }

    return 0;
}
