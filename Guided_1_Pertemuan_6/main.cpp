#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    //Guided 1
    int TabInt[10];

    //mengisi array
    for (int i=0; i<10; i++){
        TabInt[i] = i*10;
    }

    //menampilkan array
    for (int i=0; i<10; i++) {
        cout << TabInt[i] << endl;
    }

    return 0;
}
