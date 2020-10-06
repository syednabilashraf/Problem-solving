#include <iostream>

using namespace std;

int main()
{
	int testcases;
	cin >> testcases;

	while (testcases--)
	{
		int n, m, k = 0;
		cin >> n >> m >> k;

		int block_heights[100] = { 0 };
		for (int i = 0; i < n; i++)
		{
			cin >> block_heights[i];
		}

		int i = 0;
		bool flag = true;

		while (true)
		{
			if (i == (n - 1))
				break;

			if (abs(block_heights[i] - block_heights[i + 1] - 1) <= k && block_heights[i] > 0)
			{
				m++;
				block_heights[i]--;
			}
			else if (i < n && abs(block_heights[i] - block_heights[i + 1]) <= k)
			{
				i++;
			}
			else if (m > 0)
			{
				block_heights[i]++;
				m--;
			}
			else if (m == 0)
			{
				block_heights[i]--;
                m++;
			}
            else
            {
                flag = false;
                break;
            }
		}

		flag ? cout << "YES" : cout << "NO";
        cout << endl;
	}
}