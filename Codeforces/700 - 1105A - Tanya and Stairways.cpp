#include <iostream>

using namespace std;

int main()
{
    int numberOfPronounced = 0;
    cin >> numberOfPronounced;

    int array[numberOfPronounced];

    for (int i = 0; i < numberOfPronounced; i++)
    {
        cin >> array[i];
    }

    int staircaseCounter = 0;

    for (int i = 0; i < numberOfPronounced; i++)
    {
        if (array[i] == 1)
        {
            staircaseCounter++;
        }
    }

    cout << staircaseCounter << endl;

    int summer = 0;
    for (int i = 1; i < numberOfPronounced; i++)
    {
        summer++;
        if (array[i] == 1)
        {
            cout << summer << " ";
            summer = 0;
        }
    }
    cout << summer + 1 << endl;
}