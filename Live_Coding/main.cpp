#include <iostream>

using namespace std;

int main()
{
    string siap;
    int nama, stamina, undead;

    //intro
    cout << ":::: HOLLY KNIGHT VS THE UNDEAD ::::" << endl;
    cout << " Pertempuran di Negeri Rogu berlangsung dengan sengit." << endl;
    cout << " Kami membutuhkan bantuanmu untuk memenangkan pertempuran ini." << endl;
    cout << " Pilih karakter anda :" << endl;
    cout << " 1.  Gallahad"  << endl;
    cout << " 2.  Lancelot"  << endl;
    cout << " 3.  Percival"  << endl;
    cout << " 4.  Tristan"   << endl;
    cout << " 5.  Gawain"    << endl;
    cout << " 6.  Bors"      << endl;
    cout << " 7.  Gareth"    << endl;
    cout << " 8.  Bedivere"  << endl;
    cout << " 9.  Bleoberis" << endl;
    cout << " 10. Brunor"    << endl;
    cout << " 11. Lucan"     << endl;
    cout << " 12. Palomedes" << endl;
    cout << " Masukkan nomor Holly Knight yang ingin anda gunakan : "; cin >> nama;

   switch (nama)
    {
    case 1 :
        stamina = 80;
        cout << "\n Selamat datang di Negeri Rogu Holly Knight Gallahad" << endl;
        cout << "\n Total stamina anda adalah " << stamina << endl;
        cout << "\n Apakah anda siap untuk terjun ke pertempuran? "; cin >> siap;

        cout << "\n Baiklah sang Holly Knight, mari kita menuju ke medan pertempuran." << endl;

        cout << "\n\n Pertempuran sedang berlangsung, harap tunggu...." << endl;

       for (int round = 1; undead <= stamina; round++) {
            undead = 10;
            stamina >= 0;
            stamina = stamina - undead;
        cout << "\n Round " << round << endl;

        cout << " Total Undead Terbunuh : " << undead << endl;
        cout << " Sisa Stamina          : " << stamina << endl;
       }
                 //output data
                 cout << "\n\n Data Hasil Pertempuran :" << endl;
                 cout << " Holly Knight Name    : Gallahad" << endl;
                 cout << " Total Round Survived : 8" << endl;
                 break;
    }

    //outro
    cout << "\n\n Terima kasih karena telah memainkan 'Holly Knight Vs The Undead'" << endl;
    cout << "\n Made by :" << endl;
    cout << " Brian Farrel Arkana" << endl;
    cout << " 2211102352" << endl;
    cout << " S1IF-10-H" << endl;

    return 0;
}
