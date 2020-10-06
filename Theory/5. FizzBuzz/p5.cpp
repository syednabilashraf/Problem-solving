#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    string answer = "";

    for (int i = 1; i <= number; i++)
    {
        answer = "";

        if (i % 3 == 0)
            answer = "Fizz";
        
        if (i % 5 == 0)
            answer.append("Buzz");

        answer == "" ? cout << i << endl : cout << answer << endl;
    }
}