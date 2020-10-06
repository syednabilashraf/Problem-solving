#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0;
    long quotient = n / s.length();
    long decreased_n = n - s.length() * quotient;

    if (s.length() == 1)
        if (s == "a")
            return n;
        else
            return 0;

    for (auto c : s)
    {
        if (c == 'a')
            count++;
    }

    count = count * quotient;

    for (long i = 0; i < decreased_n; i++)
    {
        if (s[i] == 'a')
            count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
