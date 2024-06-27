#include <iostream>

using namespace std;

int main()
{
    int bil352 [5];

    //input
    for (int a352 = 0; a352 < 5; a352++) {
        cout << " Masukkan bilangan " << a352 + 1 << " : "; cin >> bil352 [a352];
    }

    //output
    cout << "\n Bilangan yang ganjil adalah" << endl;

    for (int a352 = 0; a352 < 5; a352++) {
        if (bil352 [a352] % 2 != 0) {
            cout << " " << bil352 [a352] << endl;
        }
    }

    return 0;
}
