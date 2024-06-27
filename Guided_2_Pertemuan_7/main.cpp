#include <iostream>

using namespace std;

//Contoh Prosedur
string x;
//tanpa parameter
void tampil_nama () {
    cout << "Nama saya adalah Brian";
}

//pake parameter
void tampil_alamat (string x) {
    cout << endl << x;
}

int main()
{
    tampil_nama();
    x = "Jl. Pelita";
    tampil_alamat(x);
    return 0;
}
