#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	cin >> n;
	cin >> k;
	int team_members[n];

	for (int i = 0; i < n; i++)
	{
		cin >> team_members[i];
	}

	int member_count = 0;

	for (int i = 0; i < n; i++)
	{
		if (k + team_members[i] <= 5)
			member_count++;
	}

	int team_count = (member_count / 3);

	cout << team_count << endl;
}