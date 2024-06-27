#include <iostream>

using namespace std;
//Guided 4 - switch case
int main()
{
    int nomorHari;
    cout << "Masukkan sebuah bilangan (1-7): "; cin >> nomorHari;

    switch (nomorHari)
    {
    case 1:
        cout << "Hari ke-1 adalah Minggu";
        break;
    case 2:
        cout << "Hari ke-2 adalah Senin";
        break;
    case 3:
        cout << "Hari ke-3 adalah Selasa";
        break;
    case 4:
        cout << "Hari ke-4 adalah Rabu";
        break;
    case 5:
        cout << "Hari ke-5 adalah Kamis";
        break;
    case 6:
        cout << "Hari ke-6 adalah Jumat";
        break;
    case 7:
        cout << "Hari ke-7 adalah Sabtu";
        break;
    default:
        cout << "Inputan salah";
    }

    return 0;
}
