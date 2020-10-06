#include <iostream>

using namespace std;

int main()
{
    int limak;
    int bob;
    int years = 0;

    cin >> limak;
    cin >> bob;

    while(bob >= limak){
        bob *= 2;
        limak *= 3;
        years++;
    }
    cout << years << endl;
}