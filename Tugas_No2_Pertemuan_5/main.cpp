#include <iostream>

using namespace std;

int main()
{
    int bilangan, pencacah;
    int hasil = 1;

    cout << " Masukkan bilangan: "; cin >> bilangan;
    cout << "\n Masukkan pencacah: "; cin >> pencacah;

    for (int pangkat = 1; pangkat <= pencacah; pangkat++) {
            hasil = hasil * bilangan;
    }

    cout << "\n Hasil pangkat : " << hasil;

    return 0;
}
