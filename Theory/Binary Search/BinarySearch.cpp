#include <iostream>

using namespace std;

// Practice implementing binary search core.

int main()
{
    int arrayOfNumber[] = {1, 3, 5, 7, 8, 9, 13, 16, 18};
    
    int low, high, mid;
    low = 0;
    high = 8;
    int searching;
    cin >> searching;
    int counter = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arrayOfNumber[mid] == searching)
        {
            cout << "Found" << endl;
            cout << "Iterations: " << counter << endl;
            break;
        }
        else if (arrayOfNumber[mid] > searching) {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        counter++;
    }
}