#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
        x = 5;
        y = 8;
        for (x = 1; x <= 10; x++)
        {
            y = y + x;
            if (x >= 4)
            {
                x = x + 4;
                cout << "Nilai y = " << y << "\n";
            }
        }
    return 0;
}
