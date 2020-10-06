#include <iostream>

using namespace std;

int main()
{
    string the_thing = "";
    for (int i = 1; i < 10001; i++)
    {
        the_thing.append(to_string(i));
    }

    int i;
    cin >> i;
    cout << the_thing[i - 1] << endl;
}