#include <iostream>

using namespace std;

int nilai_1, nilai_2;

void bilangan() {

    cout << " Masukkan nilai pertama : "; cin >> nilai_1;
    cout << " Masukkan nilai kedua   : "; cin >> nilai_2;

    if (nilai_1 > nilai_2) {
        cout << " Nilai yang lebih besar adalah " << nilai_1 << endl;
    } else if (nilai_1 < nilai_2) {
        cout << " Nilai yang lebih besar adalah " << nilai_2 << endl;
    } else {
        cout << " Kedua nilai bernilai sama" << endl;
    }
}

int main()
{
    bilangan();
    return 0;
}
