#include <iostream>

using namespace std;

int main()
{
    float celcius, fahrenheit;

    //Input Data
    cout << "Masukkan suhu dalam celcius : ";
    cin >> celcius;

    cout << endl << "Mengkonversi celcius ke fahrenheit, harap tunggu..." << endl;

    //Rumus dan Output Data
    fahrenheit = celcius * 9/5 + 32;
    cout << endl << "Celcius = " << celcius << endl;
    cout << "Fahrenheit = " << fahrenheit << endl;

    //Pembuat Program
    cout << endl << "Terima kasih karena telah menggunakan konversi suhu celcius ke fahrenheit" << endl;
    cout << "Program ini dibuat oleh :" << endl;
    cout << "Nama  : Brian Farrel Arkana" << endl;
    cout << "NIM   : 2211102352" << endl;
    cout << "Kelas : S1IF-10-H" << endl;

    return 0;
}
