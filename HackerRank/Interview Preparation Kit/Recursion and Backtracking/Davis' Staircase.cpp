#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int stepPerms(int n) {
    int steps[] = {1, 1, 2};
    if (n <= 2)
    {
        return steps[n];
    }
    int path_count = 0;
    for (int i = 3; i <= n; i++)
    {
        path_count = steps[0] + steps[1] + steps[2];
        steps[0] = steps[1];
        steps[1] = steps[2];
        steps[2] = path_count;
    }
    return steps[2];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
