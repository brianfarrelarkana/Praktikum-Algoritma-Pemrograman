#include <iostream>

using namespace std;

int bilangan352;

int bil_ganjil352 (int bilangan352) {
     if (bilangan352 % 2 != 0) {
        cout << " Bilangan yang anda masukkan merupakan bilangan ganjil" << endl;
     } else {
        cout << " Bilangan yang anda masukkan merupakan bilangan genap" << endl;
     }
     return bilangan352;
}

int main()

{
    cout << " Masukkan bilangan : "; cin >> bilangan352;
    bil_ganjil352(bilangan352);

    return 0;
}
