// Given a circularly sorted array of integers
// Find the number of times the array is rotated.
// Assume there are no duplicates in the array
// and the rotation is in anti-clockwise direction.

// -----Solution-----
// After careful observation:
// Number of rotations = index of the minimum element.
// OR number of elements before minimum element of the array.

#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int low = 0;
    int high = size - 1;
    int mid = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
            break;
        else if (arr[mid] < arr[high])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << mid;
}