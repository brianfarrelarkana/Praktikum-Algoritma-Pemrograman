#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x;
    string lanjut;

    //Intro
    cout << "Selamat datang di program milik Pak Adi" << endl;
    cout << endl << "Program ini dibuat dengan bantuan dari :" << endl;
    cout << "Nama  : Brian Farrel Arkana" << endl;
    cout << "NIM   : 2211102352" << endl;
    cout << "Kelas : S1IF-10-H" << endl;

    //Next
    cout << endl << "Silakan ketik 'lanjut' untuk melanjutkan program ini : ";
    cin >> lanjut;

    //Isi
    cout << endl << "Silakan masukkan sembarang bilangan desimal : ";
    cin >> x;
    cout << setiosflags(ios::fixed);
    cout << setprecision(2) << x << endl;

    //Outro
    cout << "Terima kasih karena telah menggunakan program ini :)" << endl;

    return 0;
}
