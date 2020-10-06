#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int numberOfDigits;
    cin >> numberOfDigits;
    vector<int> ans;

    for (int i = 0; i < numberOfDigits; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < numberOfDigits; i++)
    {
        cout << ans.at(i) << endl;
    }

}