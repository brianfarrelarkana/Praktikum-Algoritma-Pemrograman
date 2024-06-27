#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float dibagi, pembagi, hasil;

    cout << " Masukkan bilangan yang akan dibagi : "; cin >> dibagi;
    cout << "\n Masukkan bilangan pembagi          : "; cin >> pembagi;

    if (hasil = dibagi/pembagi) {
        cout << setiosflags(ios::fixed);
        cout << setprecision(2) << "\n Hasil bagi                         : " << hasil << endl;
    } else {
        cout << "\n\n Anda salah input";
        }

    return 0;
}
