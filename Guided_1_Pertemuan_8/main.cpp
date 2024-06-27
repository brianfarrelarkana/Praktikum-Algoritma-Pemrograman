#include <iostream>

using namespace std;

void insertionSort(int arr[], int length){
    int i,j,temp;
    for (i=1; i < length; i++){
        j=i;
        while (j>0 && arr[j] < arr[j-1]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

void bubbleSort (int arr[], int length){
    int temp;
    int j = length; // j=5

    while (j >= 2){// j = 5, artinya j lebih dari 2
        for (int i = 0; i < j; i++){
            if (arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        j--;
    }
}

void selectionSort (int arr[], int length){
    int temp;
    int loc_min;

    for (int i = 0; i < length; i++){
        loc_min = i;
        for (int j = i+1; j < length; j++){
            if (arr[j] < arr[loc_min]){
            loc_min = j;
            }
        }
    temp = arr[i];
    arr[i] = arr[loc_min];
    arr[loc_min] = temp;
    }
}

void printarray (int arr[], int length){
    for (int i=0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {3,5,1,2,4};

    cout << "Sebelum di sorting : " << endl;
    printarray(arr, 5);

    insertionSort(arr, 5);
    bubbleSort(arr, 5);
    selectionSort(arr, 5);

    cout << "Setelah di sorting : " << endl;
    printarray(arr, 5);

    return 0;
}
