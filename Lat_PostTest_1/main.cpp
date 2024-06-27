#include <iostream>

using namespace std;

int main()
{
    int x, maks;
    int a[4];

    for (x=0; x<4; x++){
        cout << " Masukkan Nilai Mata Kuliah " << x+1 << " : "; cin >> a[x];
        cout << endl;
    }

    maks = a[0];

    for (x=0; x<=3; x++){
        if (a[x]>maks){
            maks = a[x];
        }
    }

    cout << " Nilai maksimum adalah : " << maks << endl;
    cout << endl;
    return 0;
}
