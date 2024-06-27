#include <iostream>

using namespace std;

int main()
{
    //Guided 2 - Menampilkan kelipatan bilangan dengan while

    int kelipatan, angka;

    cout << "Masukkan kelipatan: "; cin >> kelipatan;
    angka = kelipatan;

    while (angka <= 100)
    {
        cout << angka << endl;
        angka = angka + kelipatan;
    }

    /*
    input kelipatan = 2
    nilai angka = kelipatan
        nilai angka = 2

    bakal ngecek, apakah 2 <= 15? YA
        tampilin nilai angka
        print: 2

        nilai angka = angka + kelipatan
        angka = 2
        angka = 2 + 2
        angka = 4
    */
    return 0;
}
