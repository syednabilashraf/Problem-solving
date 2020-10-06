#include <iostream>
#include <cstdio>
#include <limits.h>

using namespace std;

int calculte_cycles(long number)
{
    int cycles = 1;
    while (number != 1)
    {
        cycles++;

        if (number % 2 == 0)
            number /= 2;
        else
            number = number * 3 + 1;
    }

    return cycles;
}

int main()
{
    int i;
    int j;

    while (scanf("%d %d", &i, &j) != EOF)
    {
        bool swapped = false;
        if (i > j)
        {
            swapped = true;
            swap(i, j);
        }

        long current_max = INT_MIN;
        for (int x = i; x <= j; x++)
        {
            if (calculte_cycles(x) > current_max)
                current_max = calculte_cycles(x);
        }

        if (swapped)
            swap(i, j);

        cout << i << " " << j << " " << current_max << endl;
    }
}