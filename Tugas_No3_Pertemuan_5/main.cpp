#include <iostream>

using namespace std;

int main()
{
    int bil_1, bil_2, kpk;

    cout << " Masukkan bilangan ke-1: "; cin >> bil_1;
    cout << "\n Masukkan bilangan ke-2: "; cin >> bil_2;

    kpk = bil_1;

    while (kpk%bil_2 != 0) {
        kpk = kpk + bil_1;
    }
    cout << "\n KPK                   : " << kpk;

    return 0;
}
