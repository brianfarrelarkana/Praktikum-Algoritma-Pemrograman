#include <iostream>

using namespace std;

int main()
{
    //Guided 3 - Menu yang terus berulang

    int menu;

    do
    {
        cout << "--------Menu Makanan--------" << endl;
        cout << "1. Ayam Goreng" << endl;
        cout << "2. Ayam Bakar" << endl;
        cout << "3. Ayam Kremes" << endl;
        cout << "4. Ayam Geprek" << endl;
        cout << "5. EXIT PROGRAM" << endl;
        cout << "Pilih Makanan: "; cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "Kamu suka ayam goreng kan" << endl;
            break;
        case 2:
            cout << "Kamu suka ayam bakar kan" << endl;
            break;
        case 3:
            cout << "Kamu suka ayam kremes kan" << endl;
            break;
        case 4:
            cout << "Kamu suka ayam geprek kan" << endl;
            break;
        case 5:
            cout << "Program exit" << endl;
            break;

        }
    } while (menu != 5); // program akan berhenti ketika menu = 5


    return 0;
}
