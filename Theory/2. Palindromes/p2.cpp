#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palindrome_check(string the_string);

int main()
{
    string the_string;
    cin >> the_string;

    bool is_palindrome = palindrome_check_reversing(the_string);

    // Print 1 if true, 0 if else.
    cout << is_palindrome << endl;
}

bool palindrome_check_reversing(string the_string)
{
    string original_string = the_string;

    reverse(the_string.begin(), the_string.end());
    
    if (original_string == the_string)
        return true;
    else
        return false;
}