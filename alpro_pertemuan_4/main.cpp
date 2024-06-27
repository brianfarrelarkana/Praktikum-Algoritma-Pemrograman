#include <iostream>

using namespace std;

int main()
{
int nilai;

//Input Data

cout << "Silakan masukkan nilai mahasiswa = ";
cin >> nilai;

    //Fungsi if else

    if ((nilai >= 80)&&(nilai <= 100)) {
    cout << "A" << endl;
    }
    else if ((nilai >= 60)&&(nilai <= 79)) {
    cout << "B" << endl;
    }
    else if ((nilai >= 40)&&(nilai <= 59)) {
    cout << "C" << endl;
    }
    else if ((nilai >=20)&&(nilai <= 39)) {
    cout << "D" << endl;
    }
    else if ((nilai >=0)&&(nilai <=19)) {
    cout << "E" << endl;
    }
    else {
    cout << "Nilai yang anda masukkan salah" << endl;
    }

    return 0;
}
