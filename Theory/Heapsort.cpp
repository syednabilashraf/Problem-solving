#include <iostream>

using namespace std;

void heapify(int A[], int n, int i)
{
    int largest = i;
    int left_child = 2 * i + 1;
    int right_child =
     2* i + 2;

    if (A[left_child] > A[largest] && left_child < n)
        largest = left_child;

    if (A[right_child] > A[largest] && right_child < n)
        largest = right_child;
    
    if (largest != i)
    {
        swap(A[largest], A[i]);
        heapify(A, n, largest);
    }
    
}

void heap_sort(int A[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(A, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(A[0], A[i]);
        heapify(A, i, 0);
    }
}

int main()
{
    int to_be_sorted[10] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};

    // int sorted_array[10];

    heap_sort(to_be_sorted, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << to_be_sorted[i] << " ";
    }
}