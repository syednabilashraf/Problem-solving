#include <iostream>

using namespace std;

int reverse_int(int some_integer);

int main()
{
    int some_integer;
    cin >> some_integer;

    int answer = 0;

    answer = reverse_int(some_integer);
    cout << answer << endl;
}

int reverse_int(int some_integer)
{
    bool negative = false;
    if (some_integer < 0)
    {
        negative = true;
        some_integer *= -1;
    }

    int reverse_integer = 0;

    while (true)
    {
        reverse_integer += (some_integer % 10);
        some_integer /= 10;
        if (some_integer == 0)
            break;
        reverse_integer *= 10;
    }
    if (negative)
        reverse_integer *= -1;
    
    return reverse_integer;
}