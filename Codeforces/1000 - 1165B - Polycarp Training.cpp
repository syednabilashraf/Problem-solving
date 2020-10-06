#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int number_of_contests;
    cin >> number_of_contests;
    
    int contests[number_of_contests];

    for (int i = 0; i < number_of_contests; i++)
    {
        cin >> contests[i];
    }

    sort(contests, contests + number_of_contests);

    int days_of_training = 0;
    int number_of_problems = 1;

    for (int i = 0; i < number_of_contests; i++)
    {
        if (contests[i] < number_of_problems)
            continue;
        else
        {
            number_of_problems++;
            days_of_training++;
        }
        
    }

    cout << days_of_training << endl;
}