#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int n;

    while(T--){
        cin >> n;

        if (n - 10 > 0)
        {
            cout << n - 10 << " " << 10 << endl; 
        }
        else
        {
            cout << 0 << " " << n << endl;
        }
    }
    
    return 0;
}