#include <iostream>

using namespace std;

void tampilarr (char arr[], int panjang) {
    for(int a = 0; a < panjang; a++) {
        cout << arr[a] << ", ";
    }
    cout << endl;
}

void insertion_sort (char arr[], int panjang) {
    int x, y;
    char sementara;
    for (int z = 1; z < panjang; z++) {
        y = z;
        while (y > 0 && arr[y - 1] < arr[y]) {
            sementara = arr[y];
            arr[y] = arr[y - 1];
            arr[y - 1] = sementara;
            y--;
        }
    }
}

int main()
{
    char arr[5] = {'b', 'f', 'a', 'u', 'y'};

    cout << "Sebelum di sorting : " << endl;
    tampilarr(arr, 5);

    insertion_sort(arr, 5);

    cout << "Setelah di sorting : " << endl;
    tampilarr(arr, 5);

    return 0;
}
