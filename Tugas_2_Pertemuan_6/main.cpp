#include <iostream>

using namespace std;

int main()
{
    int pilihan352;

    do
    {
        cout << "\n            MENU";
        cout << "\n\n 1. Input Array";
        cout << "\n 2. Tampil Array";
        cout << "\n 3. Cari Nilai Minimum";
        cout << "\n 4. Cari Nilai Maksimum";
        cout << "\n 5. Hitung Rata-rata";
        cout << "\n Masukkan Pilihan : "; cin >> pilihan352;

        switch (pilihan352)
        {
        case 1:
            int bil352 [10];

            for (int bulat352 = 0; bulat352 < 10; bulat352++) {
                cout << " Masukkan bilangan bulat ke - " << bulat352 + 1 << " : "; cin >> bil352 [bulat352];
            } break;

        case 2:
            cout << "\n 10 bilangan bulat yang telah anda masukkan adalah : " << endl;
            for (int bulat352 = 0; bulat352 < 10; bulat352++) {
                cout << " " << bil352 [bulat352] << endl;
            } break;

        case 3:
            cout << "\n Nilai minimum dari 10 bilangan bulat yang telah anda masukkan adalah ";
           int kecil352;
            kecil352 = bil352[0];
            for (int bulat352 = 0; bulat352 < 10; bulat352++) {
                if (bil352 [bulat352] < kecil352) {
                    kecil352 = bil352 [bulat352];
                }
            }
            cout << kecil352 << endl;
            break;

        case 4:
            cout << "\n Nilai maksimum dari 10 bilangan bulat yang telah anda masukkan adalah ";
            int besar352;
            besar352 = bil352[10];
            for (int bulat352 = 0; bulat352 < 10; bulat352++) {
                if (bil352 [bulat352] > besar352) {
                    besar352 = bil352 [bulat352];
                }
            }
            cout << besar352 << endl;
            break;

        case 5:
            int rata352 = 0;
            cout << "\n Rata-rata dari 10 bilangan bulat yang telah anda masukkan adalah ";
            for (int bulat352 = 0; bulat352 < 10; bulat352++) {
                    rata352 = rata352 + bil352 [bulat352];
            }
            cout << " " << rata352 / 10 << endl;
            break;
        }

    } while (pilihan352 > 0 && pilihan352 < 5);

    return 0;
}
