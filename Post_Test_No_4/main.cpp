#include <iostream>

using namespace std;

int main()
{
    int ang1352, ang2352;
    string satusembilan352[9] = {"Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
    string ganjilgenap352[2] = {"Genap", "Ganjil"};

    cout << " Masukkan angka ke-1 : "; cin >> ang1352;
    cout << " Masukkan angka ke-2 : "; cin >> ang2352;

    if (ang1352 > ang2352){
        cout << " Inputan Salah";
    } else if (ang1352 < ang2352){
    for (int x352 = 0; x352 < ang2352; x352++){
            if (ang1352 <= ang2352){
              if (x352 <= 9){
                cout << satusembilan352[x352] << endl;
            } else if (x352 >= 9){
                cout << ganjilgenap352[x352] << endl;
                }
            }
        }
    }

    return 0;
}
