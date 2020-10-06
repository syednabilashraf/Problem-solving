#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    bool flag = false;

    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            flag = true;
            // true for HARD.
        }
    }

    if (flag)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}