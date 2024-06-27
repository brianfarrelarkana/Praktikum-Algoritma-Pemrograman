#include <iostream>

using namespace std;

void tampilarr (double arr[], int panjang){
    for (int a = 0; a < panjang; a++){
        cout << arr[a] << ", ";
    }
    cout << endl;
}

void bubble_sort (double arr[], int panjang){
    bool belum_tersorting = true;
    int x = 0;
    double sementara;

    while (belum_tersorting){
        belum_tersorting = false;
        x++;
        for (int y = 0; y < panjang - x; y++){
            if (arr[y] > arr[y+1]){
                sementara = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = sementara;
                belum_tersorting = true;
            }
        }
    }
}

int main()
{
    double arr[5] = {3.5, 5.6, 1.2, 2.3, 4.8};

    cout << "Sebelum di sorting : " << endl;
    tampilarr(arr, 5);

    bubble_sort(arr, 5);

    cout << "Setelah di sorting : " << endl;
    tampilarr(arr, 5);

    return 0;
}
