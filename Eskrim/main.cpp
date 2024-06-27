#include <iostream>

using namespace std;

int main()
{
    string nama;
    int stamina, undead;

    //intro
    cout << ":::: HOLLY KNIGHT VS THE UNDEAD ::::" << endl;
    cout << " Pertempuran di Negeri Rogu berlangsung dengan sengit." << endl;
    cout << " Kamu merupakan satu-satunya Knight yang dapat menyelesaikan pertempuran ini." << endl;
    cout << " Siapa namamu sang Holly Knight? "; cin >> nama;

    //input data
    cout << "\n Selamat datang di Negeri Rogu Holly Knight " << nama << endl;
    cout << " Berapa banyak stamina yang kau miliki Holly Knight " << nama << "? "; cin >> stamina;
    cout << " Berapa banyak Undead yang ingin kau kalahkan Holly Knight " << nama << "? "; cin >> undead;

    cout << "\n Baiklah sang Holly Knight, mari kita menuju ke medan pertempuran." << endl;

    cout << "\n\n Pertempuran sedang berlangsung, harap tunggu...." << endl;

    //output data
    cout << "\n\n Data Hasil Pertempuran :" << endl;
    cout << " Holly Knight Name : " << nama << endl;
    cout << " Stamina           : " << stamina << endl;
    cout << " Undead            : " << undead << endl;
    if (stamina > undead) {
        cout << " Result            : Holly Knight " << nama << " memenangkan pertempuran dengan mudah!";
    } else if (stamina == undead) {
        cout << " Result            : Beruntung Holly Knight " << nama << " berhasil mengalahkan " << undead << " undead!";
    } else {
        cout << " Result            : Holly Knight " << nama << " mengalahkan " << stamina << " undead," << endl;
        cout << "                     namun sayang Holly Knight " << nama << " gugur di medan perang!";
        }

    //outro
    cout << "\n\n Terima kasih karena telah memainkan 'Holly Knight Vs The Undead'" << endl;
    cout << "\n Made by :" << endl;
    cout << " Brian Farrel Arkana" << endl;
    cout << " 2211102352" << endl;
    cout << " S1IF-10-H" << endl;

    return 0;
}
