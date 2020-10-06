#include <iostream>

using namespace std;

int main()
{
    string tableCard;
    cin >> tableCard;

    string handCards[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> handCards[i];
    }
    
    bool flag = false;

    for(int i = 0; i < 5; i++)
    {
        if (handCards[i][0] == tableCard[0] || handCards[i][1] == tableCard[1])
        {
            flag = true;
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    
    
}