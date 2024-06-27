#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum;
    cin >> sum;
    num = sum;
    while (num != -1)
    {
        cin >> num;
        sum = sum + 2 * num;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
//Input 3, 4, 6, 7, 2, -1
