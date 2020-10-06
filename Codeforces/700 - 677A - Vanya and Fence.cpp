#include <iostream>

using namespace std;

int main()
{
    int numberOfFriends;
    cin >> numberOfFriends;

    int heightOfFence;
    cin >> heightOfFence;

    int heightArray[numberOfFriends];

    for (int i = 0; i < numberOfFriends; i++)
    {
        cin >> heightArray[i];
    }

    int width = 0;

    for (int i = 0; i < numberOfFriends; i++)
    {
        if (heightArray[i] <= heightOfFence)
        {
            width = width + 1;
        }
        else
        {
            width = width + 2;
        }
    }

    cout << width << endl;
}