#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int list_of_numbers[n + 2];

    for (int i = 2; i <= n; i++)
    {
        list_of_numbers[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        cout << list_of_numbers[i] << " ";
    }

    for (int i = 2; i <= n; i++)
    {
        if (list_of_numbers[i] == 0)
            continue;
        
        int prime = i;
        int j = 2;
        while (prime * j <= n)
        {
            list_of_numbers[prime * j] = 0;
            j++;
        }
    }

    cout << endl;

    for (int i = 2; i <= n; i++)
    {
        if (list_of_numbers[i] != 0)
           cout << list_of_numbers[i] << " ";
    }
}