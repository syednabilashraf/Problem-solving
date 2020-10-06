#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string polyhedrons[n];

    for(int i = 0; i < n; i++)
    {
        cin >> polyhedrons[i];
    }

    int total = 0;
    
    for(int i = 0; i < n; i++)
    {
        if (polyhedrons[i].find("Tetra") != std::string::npos)
        {
            total += 4;
        }
        else if (polyhedrons[i].find("Cube") != std::string::npos)
        {
            total += 6;
        }
        else if (polyhedrons[i].find("Octa") != std::string::npos)
        {
            total += 8;
        }
        else if (polyhedrons[i].find("Dodeca") != std::string::npos)
        {
            total += 12;
        }
        else if (polyhedrons[i].find("Icosa") != std::string::npos)
        {
            total += 20;
        }
        else
        {
            // Do nothing.
        }
    }

    cout << total;
    
}