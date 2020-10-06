#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string my_reverse(string the_string);
string algo_reverse(string the_string);

int main()
{
    // Write a function that reverses the string below.
    string the_string;
    cin >> the_string;

    string reversed_string = my_reverse(the_string);
    cout << reversed_string << endl;
    string algo_reversed_string = algo_reverse(the_string);
    cout << algo_reversed_string << endl;

}

string my_reverse(string the_string)
{
    // The following reverses a string.
    reverse(the_string.begin(), the_string.end());
    return the_string;
}

string algo_reverse(string the_string)
{
    string reversed_string = "";

    for (int i = the_string.size() - 1; i >= 0; i--)
    {
        // For some reason append wasn't working.
        reversed_string += the_string[i];
    }
    return reversed_string;
}