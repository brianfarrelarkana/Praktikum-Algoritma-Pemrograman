#include <iostream>

using namespace std;

void asc352(int arr352[], int panjang352){
    int x352,y352,sem352;
    for (x352 = 1; x352 < panjang352; x352++){
        y352=x352;
        while (y352 > 0 && arr352[y352] < arr352[y352-1]){
            sem352= arr352[y352];
            arr352[y352] = arr352[y352-1];
            arr352[y352-1] = sem352;
            y352--;
        }
    }
}

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

    int bilangan352[10] = {21, 61, 28, 72, 44, 68, 37, 52, 75, 75};
    int indeks352;
    int bil_dicari352;

    asc352 (bilangan352, 10);

    cout << " Masukkan bilangan yang ingin dicari : "; cin >> bil_dicari352;

    indeks352 = binary_Search352 (bilangan352, 10, bil_dicari352);

    if (indeks352 != -1)
    {
        cout << "\n Bilangan " << bil_dicari352 << " ada di dalam program" << endl;
    } else {
        cout << "\n Bilangan " << bil_dicari352 << " tidak ada di dalam program" << endl;
    }

    return 0;
}
