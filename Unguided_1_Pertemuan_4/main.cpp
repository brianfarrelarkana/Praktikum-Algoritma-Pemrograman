#include <iostream>

using namespace std;

int main()
{
    float suhu;
    cout << "Masukkan suhu air dalam celcius: "; cin >> suhu;

    if (suhu <= 0) {
        cout << "Air akan berwujud padat atau es";
    } else if (suhu > 0 && suhu < 100) {
        cout << "Air akan berwujud cair";
        } else {
        cout << "Air akan berwujud gas";
        }

    return 0;
}
