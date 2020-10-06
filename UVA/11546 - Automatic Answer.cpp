#include <iostream>

using namespace std;

int evaluation_function(int number)
{
    number *= 567;
    number /= 9;
    number += 7492;
    number *= 235;
    number /= 47;
    number -= 498;

    number /= 10;
    if (number < 0)
        number *= -1;
    return number % 10;
}

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int number;
        cin >> number;

        cout << evaluation_function(number) << endl;
    }
}