// if last digit is non-zero, decrease by one
// if the last digit is 0, divide by 10. (Remove last digit).
#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;

    cin >> n >> k;

    while(k--)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }
    
    cout << n;

    return 0;
}