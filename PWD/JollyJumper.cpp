#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int input = 0;

    int number_array[3000] = {0};

    for (int i = 0; i < 3000; i++)
    {
        if (input == ' ')
            i++;
        else if (input  == '\n')
            break;
        else
        {
            number_array[i] = input;
        }
        cin >> input;
    }
}