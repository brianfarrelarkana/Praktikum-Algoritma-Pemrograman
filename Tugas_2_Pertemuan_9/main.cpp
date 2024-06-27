#include <iostream>

using namespace std;

int binary_Search352 (int arr352[], int x352, int y352) {
    int kiri352, kanan352, tengah352;
    kiri352 = 0;
    kanan352 = x352;
    int posisi352 = -1;

    while (kiri352 <= kanan352)
    {
        tengah352 = (kanan352 + kiri352)/2;

        if (y352 == arr352[tengah352]) {
            posisi352 = tengah352;
            break;
        } else if (y352 < arr352[tengah352]) {
            kanan352 = tengah352-1;
        } else if (y352 > arr352[tengah352]) {
            kiri352 = tengah352+1;
        }
    }

    return posisi352;

}

int main() {

    int nim352[13] = {12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007, 12102008, 12102009, 12102010, 12102011, 12102012, 12102013};
    int indeks352;
    int nim_dicari352;

    cout << " Masukkan NIM yang ingin dicari di kelas ini: "; cin >> nim_dicari352;

    indeks352 = binary_Search352 (nim352, 13, nim_dicari352);

    if (indeks352 != -1)
    {
        cout << " Mahasiswa dengan NIM " << nim_dicari352 << " berada di kelas ini" << endl;
    } else {
        cout << " Mahasiswa dengan NIM " << nim_dicari352 << " tidak berada di kelas ini" << endl;
    }

    return 0;
}
