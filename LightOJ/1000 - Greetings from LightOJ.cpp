#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int i = 1;
    int x, y;

    while(testCases--){
        cin >> x;
        cin >> y;
        cout << "Case " << i++ << ": " << x + y << endl; 
    }
    return 0;
}