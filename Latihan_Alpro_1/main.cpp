#include <iostream>
using namespace std;
int main()
{
 int pilih, nim;
 string nama, yn;

 //Tampilan Menu
 cout << "Selamat Datang di Menu \n";
 cout << "\n1. Entry Data";
 cout << "\n2. Cetak Laporan";
 cout << "\n3. Tentang";
 cout << "\n4. Halaman Utama";
 cout << "\n5. Lihat Laporan";
 cout << "\n6. Keluar";
 cout << "\n\n Silakan pilih menu yang anda inginkan (1-6) : ";
 cin >> pilih;

 //Fungsi switch case break
 switch (pilih) {
 case 1 : cout << "\n\n Silakan Entry Data Anda :\n";
          cout << "\n Nama Depan : ";
          cin >> nama;
          cout << "\n NIM        : ";
          cin >> nim;

          cout << "\n\n Data yang anda entry adalah :\n";
          cout << "\n Nama Depan : " << nama << endl;
          cout << "\n NIM        : " << nim << endl;

 case 2 : cout << "\n\n2. Anda Pilih Cetak Laporan";

 case 3 : cout << "\n\n3. Anda Pilih Tentang";

 case 4 : cout << "\n\n4. Anda Pilih Halaman Utama";

 case 5 : cout << "\n\n5. Anda Pilih Lihat Laporan";

 case 6 : cout << "\n\n6. Anda Pilih Keluar";
          cout << "\n\n Apakah anda yakin anda ingin keluar? (y/n) ";
          cin >> yn;
          if (yn=="n"){
            cout << "\n Anda masih berada di sistem" << endl;
          }
          else if (yn=="y") {
                cout << "\n Anda telah keluar" << endl;
          }
          else {
                cout << "\n Anda Salah Input";} break;
 }
 return 0;
}
