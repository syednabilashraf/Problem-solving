#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = a ^ b;

    int count = 0;

    while (c)
    {
        count = count + (c & 1);
        c = c >> 1;
    }

    cout << count;
}