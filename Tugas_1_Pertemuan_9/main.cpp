#include <iostream>

using namespace std;

int sequential_search352 (string arr352[], int x352, string kunci352)
{
    for (int idx352 = 0; idx352 < x352; idx352++)
    {
        if (arr352[idx352] == kunci352){
            return idx352;
        }
    }
    return -1;
}

int main()
{
    string plat352[10] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    int idx_ketemu352;
    string dicari352;

    cout << " Masukkan plat nomor kendaraan yang ingin dicari : ";
    getline (cin, dicari352);

    idx_ketemu352 = sequential_search352 (plat352, 10, dicari352);

    if (idx_ketemu352 != -1){
        cout << " Nomor plat " << dicari352 << " terdapat di dalam database nomor " << idx_ketemu352+1 << endl;
    } else {
        cout << " Nomor plat " << dicari352 << " tidak tedapat di dalam database" << endl;
    }

    return 0;
}
