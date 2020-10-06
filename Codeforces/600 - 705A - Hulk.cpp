// if 1 = I hate it
// if odd after 1 = ends with hate it
// if even after 1 = ends with love it
// between, has that

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i <= n)
    {
        if (i > 1 && i <= n) 
        {
            cout << "that ";
        }

        if (i % 2 == 0)
        {
            cout << "I love ";
        }
        else
        {
            cout << "I hate ";
        }
        i++;
    }
    cout << "it" << endl;
}