#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int sea_level = 0;
    int valley_counter = 0;
    bool in_valley = false;
    for (auto c : s)
    {
        if (c == 'U')
            sea_level++;
        else
            sea_level--;

        if (sea_level < 0)
            in_valley = true;
        else if (sea_level >= 0 && in_valley == true)
        {
            in_valley = false;
            valley_counter++;
        }
    }
    cout << valley_counter << endl;
    return valley_counter;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
