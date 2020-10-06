#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int planes[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> planes[i];
    }
    
    bool flag = false;

    for (int i = 1; i <= n; i++)
    {
        if (planes[planes[planes[i]]] == i)
        {
            flag = true;
            break;
        }
    }

    flag ? cout << "YES" << endl : cout << "NO" << endl;
}