#include <iostream>

using namespace std;

int main()
{
    int penduduk = 1;


    for(int hari = 1; hari <= 120; hari++){

        cout << "Hari ke - " << hari;

        if (hari <= 1){
            cout << " : " << penduduk << endl;
        }
        else if (hari%3!=0){
            penduduk = penduduk * 3;
            cout << " : " << penduduk << endl;

        } else{
            penduduk = penduduk / 2;
            cout << " : " << penduduk << endl;
        }

    }

    return 0;
}
