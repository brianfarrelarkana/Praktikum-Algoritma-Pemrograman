#include <iostream>

using namespace std;

int main()
{
    int pilih;
    float sisi, jari, tinggi, vol_kub, luas_ling, vol_sil;
    cout << "\n<<< MENU >>>\n";
    cout << "\n1. Menghitung Isi Kubus";
    cout << "\n2. Menghitung Luas Lingkaran";
    cout << "\n3. Menghitung Isi Silinder";
    cout << "\n\nPilih Nomor (1-3): "; cin >> pilih;

    switch (pilih) {
    case 1: cout << "Masukkan panjang sisi kubus : "; cin >> sisi;
            vol_kub = sisi * sisi * sisi;
            cout << "Volume Kubus = " << sisi << " * " << sisi << " * " << sisi << " = " << vol_kub;
            break;

    case 2: cout << "Masukkan jari-jari lingkaran : "; cin >> jari;
            luas_ling = 3.14 * jari * jari;
            cout << "Luas Lingkaran = " << 3.14 << " * " << jari << " * " << jari << " = " << luas_ling;
            break;

    case 3: cout << "Masukkan jari-jari alas silinder : "; cin >> jari;
            cout << "Masukkan tinggi silinder         : "; cin >> tinggi;
            vol_sil = 3.14 * jari * jari * tinggi;
            cout << "Volume Silinder = " << 3.14 << " * " << jari << " * " << jari << " * " << tinggi << " = " << vol_sil;
            break;

    default: cout << "Inputan anda salah";
    }

    return 0;
}
