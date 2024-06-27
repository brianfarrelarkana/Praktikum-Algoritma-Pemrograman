#include <iostream>

using namespace std;

int main()
{
    int genap;

    //Ascending
    cout << "Bilangan genap 1-100 :\n";
    for (genap = 1; genap <=100; genap++){
        if (genap % 2 == 0 ){
            cout << genap << ", ";
        }
    }

    //Descending
    cout << "\n\nBilangan genap 100 - 1 :" << endl;
    for (genap = 100; genap >= 1; genap--){
        if (genap %2 == 0){
            cout << genap << ", ";
        }
    }
    return 0;
}
