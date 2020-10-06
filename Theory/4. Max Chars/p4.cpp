#include <iostream>
#include <string>

using namespace std;

char find_max_char(string the_string);

int main()
{
    string the_string;
    getline(cin, the_string);
    char answer = find_max_char(the_string);
    cout << answer << endl;
}

char find_max_char(string the_string)
{
    int character_map[300] = {0};
    for (auto c : the_string)
    {
        character_map[c]++;
    }

    int current_max = 0;

    for (int i = 0; i < 300; i++)
    {
        if (character_map[i] > character_map[current_max])
            current_max = i;
    }

    return char(current_max);
}