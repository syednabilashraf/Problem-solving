#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numberOfLanterns;
    int distance;

    cin >> numberOfLanterns;
    cin >> distance;

    int lanterns[numberOfLanterns];

    for (int i = 0; i < numberOfLanterns; i++)
    {
        cin >> lanterns[i];
    }

    sort(lanterns, lanterns + numberOfLanterns);

    int start = lanterns[0];
    int last = distance - lanterns[numberOfLanterns - 1];

    // cout << start << endl << last;

    double result;
    double current = 0;
    double maximum = 0;
    for (int i = 0; i < numberOfLanterns - 1; i++)
    {
        current = (double(lanterns[i + 1] - lanterns[i])) / 2;
        // cout << current << " ";
        if (current > maximum)
            maximum = current;
    }

    // cout << endl;
    if (start > maximum)
        maximum = start;
    if (last > maximum)
        maximum = last;

    cout.precision(10);
    cout << maximum << endl;
}