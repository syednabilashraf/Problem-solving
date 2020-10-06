#include <iostream>

using namespace std;

int main()
{
    cout << "Samsung giff job pls" << endl;

}

void array_chunker(int original_array[], int size)
{
    int new_array_first[size];
    int new_array_second[sizeof(original_array) / original_array[0] - size];

    int i = 0;

    for (i = 0; i < size; i++)
    {
        new_array_first[i] = original_array[i];
    }

    while (i < sizeof(original_array) / original_array[0] - size)
    {
        new_array_second[i] = original_array[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << new_first_array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(original_array) / original_array[0] - size; i++)
    {
        cout << new_second_array[i] << " ";
    }
    cout << endl;


}