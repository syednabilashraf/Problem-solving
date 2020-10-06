#include <iostream>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    int case_number = 1;

    while (testcases--)
    {
        int n, p, q;
        cin >> n >> p >> q;
        
        int eggs[n];

        for (int i = 0; i < n; i++)
        {
            cin >> eggs[i];
        }

        int num_eggs = 0;
        int weight_eggs = 0;

        for (int i = 0; i < n; i++)
        {
            if (weight_eggs + eggs[i] <= q && num_eggs < p)
            {
                weight_eggs = weight_eggs + eggs[i];
                num_eggs++;
            }
            else
            {
                break;
            }
            
        }

        cout << "Case " << case_number++ << ": " << num_eggs << endl;
    }
}