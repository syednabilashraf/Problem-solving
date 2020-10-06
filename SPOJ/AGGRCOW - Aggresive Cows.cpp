#include <iostream>
#include <algorithm>

using namespace std;

int evaluation_function(int number_of_cows, int space, int stalls_indices[], int number_of_stalls)
{
    int last_cow_position = 0;
    number_of_cows--;
    for (int i = 1; i < number_of_stalls; i++)
    {
        if (stalls_indices[i] - stalls_indices[last_cow_position] >= space)
        {
            last_cow_position = i;
            number_of_cows--;
        }

        if (number_of_cows == 0)
            return 1;
    }

    return 0;
}

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int number_of_stalls;
        int number_of_cows;

        cin >> number_of_stalls;
        cin >> number_of_cows;

        int stall_indices[number_of_stalls];

        for (int i = 0; i < number_of_stalls; i++)
        {
            cin >> stall_indices[i];
        }

        sort(stall_indices, stall_indices + number_of_stalls);

        int low = 0;
        int high = 1000000000;
        int current_max = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (evaluation_function(number_of_cows, mid, stall_indices, number_of_stalls) == 0)
                high = mid - 1;
            else if (evaluation_function(number_of_cows, mid, stall_indices, number_of_stalls) == 1)
            {
                if (mid > current_max)
                {
                    current_max = mid;
                }

                low = mid + 1;
            }
        }

        cout << current_max << endl;
    }
}