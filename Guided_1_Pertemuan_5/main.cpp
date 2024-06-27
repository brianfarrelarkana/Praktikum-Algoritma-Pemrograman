#include <iostream>

using namespace std;

int main()
{
    //Guided 1 - Perulangan kata menggunakan FOR

    // ++ = nilai variabel + 1
    // -- = nilai variabel - 1
    for (int i = 0; i < 5; i++) {
        cout << "Halo Semuanya!" << endl;
    }

    //iterasi ketika i = 0
    // bakal ngecek, apakah 0 < 5? YA
        //bakal ngeprint: Halo Semuanya
        // nilai variabel i = 0
            // i + 1 = 1
            // nilai i = 1

    //iterasi ketika i = 1
    // bakal ngecek, apakah 1 < 5? YA
    //perulangan terjadi
    // nilai i ++
            //nilai i = 1 + 1 = 2

    // nilai i = 5
    // bakal ngecek, apakah 5 < 5? TIDAK
    // Gaada perulangan, profram berhenti

    int a = 0;

    while (a < 5) {
        cout << "Halo dek!" << endl;
        a++;
    }

    return 0;
}
