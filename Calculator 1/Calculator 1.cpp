#include <iostream>

using namespace std;

int main()
{
    float a, b, Result, Done;
    char arithmetic;

    cout << "Welcome to my first calculator\n\n";

    //pengisian a, b, dan operator oleh pengguna
    cout << "Masukan nilai pertama : ";
    cin >> a;
    
    cout << "Pilih operator (+, -, *, /) : ";
    cin >> arithmetic;

    cout << "Masukan nilai kedua : ";
    cin >> b;

    //rincian arithmetic
    switch (arithmetic) {
    case '+':
        Result = a + b;
        cout << "Hasil : \n";
        cout << a << arithmetic << b << '=' << Result << endl;
        break;

    case '-':
        Result = a - b;
        cout << "Hasil : \n";
        cout << a << arithmetic << b << '=' << Result << endl;
        break;

    case '*':
        Result = a * b;
        cout << "Hasil : \n";
        cout << a << arithmetic << b << '=' << Result << endl;
        break;

    case '/':
        Result = a / b;
        cout << "Hasil : \n";
        cout << a << arithmetic << b << '=' << Result << endl;
        break;

    default:
        cout << "Nilai yang anda masukkan salah, harap masukkan nilai lain\n";

    }

    cout << "Terima kasih sudah menggunakan kalkulator ini";

    cin.get();
    return 0;

}
