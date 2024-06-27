#include <iostream>

using namespace std;

int main()
{
    int nilai[6] = {90, 80, 70, 60, 50, 40};
    string nama[6] = {"JOHN", "LUIS", "TOM", "ANGEL", "JONI", "MARCEL"};

    for (int nomor = 0; nomor < 6; nomor++) {
            cout << " Data ke - " << nomor << " : " << nama[nomor] << " dengan nilai : " << nilai[nomor] << endl;
    }
    cout << endl;
    cout<<" Nama Mahasiswa : "<<nama[2]<<", mendapat nilai : "<<nilai[2]<<endl;
    cout<<" Nama Mahasiswa : "<<nama[5]<<", mendapat nilai : "<<nilai[5]<<endl;

 return 0;
}
