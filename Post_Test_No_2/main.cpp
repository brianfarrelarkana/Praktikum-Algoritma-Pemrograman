#include <iostream>

using namespace std;

int main()
{
    string kalimat352;
    char vokal352[10] = {'a', 'A', 'i', 'I', 'u', 'U', 'e', 'E', 'o', 'O'};
    int vkl352 = 0;
    int knsn352 = 0;
    int sps352 = 0;

    cout << " Masukkan Sebuah Kalimat = "; getline (cin, kalimat352);

    cout << " Hasilnya adalah =\n\n";

    for (int x352 = 0; x352 < kalimat352; x352){
    if (kalimat352 == vokal352[]){
        vkl352+1;
    } else if (kalimat352 == " "){
        sps352+1;
    } else {
        knsn352+1;
    }
    }

    cout << " Vokal    = " << vkl352;
    cout << " Konsonan = " << knsn352;
    cout << " Spasi    = " << sps352;

    return 0;
}
