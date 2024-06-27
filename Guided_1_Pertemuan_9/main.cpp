#include <iostream>

using namespace std;

int sequential_search (int data[], int n, int k){
    int posisi, i, ketemu;
    // -1 nandain kalo dia itu ga ada / ga ketemu
    if (n <= 0)
        posisi = -1;
    else {
        ketemu = 0;
        i = 1;
        while ((i < n-1) && !ketemu){
            if (data[i] == k){
                posisi = i;
                ketemu = 1;
            } else {
                i++;
            }
            if (!ketemu){
                posisi = -1;
            }
        }
    }
    return posisi;
}

int main()
{
    int n = 7;
    int data[] = {3,1,5,6,4,7,0};
    int k = 4;

    int posisi = sequential_search (data, n, k);

    if (posisi != -1){
        cout << "Key " << k << " was found at index-" << posisi << endl;
    } else { // posisi = -1
        cout << "Key " << k << " not found" << endl;
    }

    return 0;
}
