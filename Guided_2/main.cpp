#include <iostream>

using namespace std;

int main()
{
    //Guided 2 - Input dan Output

    //deklarasi tipe data
    int bilangan;
    char karakter;
    string kata; //String untuk menyimpan kata, untuk menyimpan lebih dari 1 kata gunakan syntax "getline"

    //"cin" untuk input nilai ke variabel
    cout << "Inputkan Bilangan : ";
    cin >> bilangan;

    cout << "Inputkan Karakter : ";
    cin >> karakter;

    cout << "Inputkan Kata : ";
    cin >> kata;

    //menampilkan nilai yang telah di input
    cout << endl << "Data yang Anda inputkan adalah : " << endl;
    cout << bilangan << endl;
    cout << karakter << endl;
    cout << kata << endl;

    return 0;
}
