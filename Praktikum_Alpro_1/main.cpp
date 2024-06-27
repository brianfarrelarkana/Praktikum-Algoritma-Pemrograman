#include <iostream>                 //Library iostream (input output stream)

using namespace std;                //Mempermudah penulisan syntax

int penjumlahan (int, int);         //Function penjumlahan, parameter integer
int penjumlahan (int a, int b) {    //Mulai badan program
 int c;                             //Deklarasi
 c = a+b;                           //Operation
 return c;                          //Pengembalian nilai
}                                   //Akhir

 int main()                         //Function utama
{                                   //Mulai body program
    int x=5, y=2, z;                //Deklarasi lokal
    z = penjumlahan (x,y);          //Pemanggilan fungsi
    cout << z << endl;              //Menampilkan output
    return 0;
}                                   //Akhir body program
