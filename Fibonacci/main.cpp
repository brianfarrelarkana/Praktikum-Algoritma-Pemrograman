#include <iostream>

using namespace std;

int main()
{
    int fn1 = 0;
    int fn2 = 1;
    int n, fn;
    cout << "Deret Fibonacci" << endl;
    cout << "Masukkan nilai n : "; cin >> n;

    cout << fn2 << ", ";
    for (int i = 1; i < n; i++) {
        fn = fn1 + fn2;
        fn1 = fn2;
        fn2 = fn;
        cout << fn << ", ";
    }

    return 0;
}
