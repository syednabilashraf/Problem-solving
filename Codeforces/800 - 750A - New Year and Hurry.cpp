#include <iostream>

using namespace std;

int main()
{
    int numberOfProblems;
    int minutes;
    int remainingTime;
    int solved = 0;

    cin >> numberOfProblems;
    cin >> minutes;

    remainingTime = 240 - minutes;

    for (int i = 1; i <= numberOfProblems; i++)
    {
        if (remainingTime - i * 5 < 0)
            break;
        remainingTime = remainingTime - i * 5;
        solved++;
    }
    cout << solved << endl;
}