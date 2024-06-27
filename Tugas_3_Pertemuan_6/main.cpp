#include <iostream>

using namespace std;

int main()
{
    int angka352;
    int tersimpan352 [5] = {3, 5, 8, 20, 352};

    cout << " Masukkan bilangan : "; cin >> angka352;

    for (int bil352 = 0; bil352 < 5; bil352++) {
        if (angka352 == tersimpan352 [bil352]) {
            cout << " Bilangan anda tersimpan di urutan array ke " << bil352+1 << endl;
        }
    }

    return 0;
}
