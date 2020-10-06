#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    int even = 0;
    int odd = 0;
    int latest_even = 0;
    int latest_odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
            latest_even = i + 1;
        }
        else
        {
            odd++;
            latest_odd = i + 1;
        }
    }

    if (odd > even)
        cout << latest_even << endl;
    else
        cout << latest_odd << endl;
}