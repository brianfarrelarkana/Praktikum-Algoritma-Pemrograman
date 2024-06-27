#include <iostream>

using namespace std;

int binarysearch (int arr[], int n, int k){
    int kiri, kanan, tengah;
    kiri = 0;
    kanan = n;
    int posisi = -1;
    bool ketemu = false;

    while (kiri <= kanan)
    {
        tengah = (kanan+kiri)/2;

        if (k == arr[tengah]){
            posisi = tengah;
            break;
        } else if (k < arr[tengah]){
            kanan = tengah-1;
        } else if (k > arr[tengah]){
            kiri = tengah+1;
        }
    }
    return posisi;
}

int main()
{
    int angka[6] = {1,5,7,8,11,15};
    int idx_ditemukan;
    int yangDicari;

    cout << "Masukkan angka yang ingin dicari : ";
    cin >> yangDicari;

    idx_ditemukan = binarysearch(angka, 6, yangDicari);

    if (idx_ditemukan != -1)
    {
        cout << yangDicari << " ditemukan pada indeks " << idx_ditemukan << endl;
    } else {
        cout << yangDicari << " tidak ditemukan" << endl;
    }

    return 0;
}
