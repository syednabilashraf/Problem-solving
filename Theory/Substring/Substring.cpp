// This showcases the implementation of string::find which finds any instance of a string within another.
// The complexity of this function is O(n).
// This is the best complexity for finding a substring in another.
// Further reading required for the KMP Algorithm and Z Algorithm for pattern finding.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstString;
    string secondString;
    
    getline(cin, firstString);
    getline(cin, secondString);

    cout << "Found at index: " << firstString.find(secondString) << endl; // This returns the first index where the substring is found.
    cout << "The value of string::npos: " << string::npos << endl; // This is the value you get when a valid string is not returned.
    // From CPP Reference:
    // npos is a static member constant value with the greatest possible value for an element of type size_t.

    // The proper way to implement it would be to do the following.
    
    if (firstString.find(secondString) != string::npos) {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    // Another way.

    if (firstString.find(secondString) < string::npos) {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    
    
}