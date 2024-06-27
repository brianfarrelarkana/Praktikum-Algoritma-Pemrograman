#include <iostream>

using namespace std;

int main()
{
    int pilih;

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
    case 1 : cout << "\n\n Maaf anda belum bisa entry data karena program belum dibuat oleh pembuat :)"; break;

    case 2 : cout << "\n\n Mencetak laporan, harap tunggu..."; break;

    case 3 : cout << "\n\n Program ini dibuat oleh :";
             cout << "\n Nama  : Brian Farrel Arkana";
             cout << "\n NIM   : 2211102352";
             cout << "\n Kelas : S1IF-10-H"; break;

    case 4 : cout << "\n\n Selamat Datang di Halaman Utama";
             cout << "\n Maaf halaman utama belum di program oleh pembuat :)"; break;

    case 5 : cout << "\n\n Memuat laporan untuk dilihat, harap tunggu..."; break;

    case 6 : cout << "\n\n Terima kasih karena telah berkunjung"; break;

    default : cout << "\n\n Anda Salah Input Nomor";
    }

    return 0;
}
