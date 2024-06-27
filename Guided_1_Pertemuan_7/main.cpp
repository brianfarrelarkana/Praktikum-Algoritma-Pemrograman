#include <iostream>

using namespace std;

//Contoh fungsi
// f = x^2 + y^2
int x, y;

int fungsi_kuadrat (int a, int b) {
    //dua parameter
    int hasil = (a*a) + (b*b);

    return hasil;
}
int main()
{
    cout << "Masukkan x : ";
    cin >> x;
    cout << "Masukkan y : ";
    cin >> y;
    //menguji fungsi
    cout << "Hasil : " << fungsi_kuadrat(x,y) << endl;

    return 0;
}
