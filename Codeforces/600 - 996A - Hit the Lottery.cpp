#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0;
    while(n)
    {
        if (n - 100 >= 0)
        {
            n -= 100;
            counter++;
        }
        else if (n - 20 >= 0) 
        {
            n -= 20;
            counter++;
        }
        else if (n - 10 >= 0) 
        {
            n -= 10;
            counter++;
        }
        else if (n - 5 >= 0) 
        {
            n -= 5;
            counter++;
        }
        else if (n - 1 >= 0) 
        {
            n -= 1;
            counter++;
        }
    }

    cout << counter << endl;
}