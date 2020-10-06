#include <iostream>

using namespace std;

int main()
{
    int numberOfProblems;
    cin >> numberOfProblems;

    int number = 0;
    int solvable = 0;

    while (numberOfProblems--)
    {
        int counter = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> number;
            if (number == 1)
            {
                counter++;
            }
        }

        if (counter > 1)
        {
            solvable++;
        }  
    }
    cout << solvable << endl;
}