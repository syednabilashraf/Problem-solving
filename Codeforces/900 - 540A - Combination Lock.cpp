#include <iostream>

using namespace std;

int extract_digits(string original_position, string required_combination, int index)
{
	int OP = int(original_position[index]) - '0';
	int RP = int(required_combination[index]) - '0';

	int steps_first = 0;
	int steps_second = 0;

	for (int i = OP; i != RP; i++)
	{
		if (i == RP)
			break;

		steps_first++;

		if (i == 9)
		{
			i = -1;
		}
	}

	for (int i = OP; i != RP; i--)
	{
		if (i == RP)
			break;

		steps_second++;
		if (i == 0)
		{
			i = 10;
		}
	}

	if (steps_first < steps_second)
		return steps_first;
	else
		return steps_second;
}

int main()
{
	int n = 0;
	cin >> n;

	string original_position;
	cin >> original_position;

	string required_combination;
	cin >> required_combination;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = sum + extract_digits(original_position, required_combination, i);
	}

	cout << sum << endl;
}