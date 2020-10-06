#include <iostream>

using namespace std;

int evaluation_function(int x)
{
    while (x / 10 != 0)
    {
        int number = x;
        x = 0;
        while (number != 0)
        {
            int digit = number % 10;
            x = x + digit;
            number /= 10;
        }
    }

    return x;
}

int main()
{
    int number;
    while (true)
    {
        cin >> number;
        if (number == 0)
            return 0;

        cout << evaluation_function(number) << endl;
    }
}