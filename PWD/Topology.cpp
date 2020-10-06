#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int number_nodes;
    cin >> number_nodes;

    vector< vector<int> > graph[number_nodes + 1];

    int edges;
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        int start;
        int end;

        cin >> start >> end;

        graph[start].push_back(end);
        graph[end].push_back(start);

    }

    int maximum_degrees = 0;
    int minimum_degrees = 0;

    for (auto nodes : graph)
    {
        maximum_degrees = (maximum_degrees, nodes.size());
        minimum_degrees = (minimum_degrees, nodes.size());
    }

    if (minimum_degrees == 1 && maximum_degrees == 2)
        cout << "bus topology" << endl;
    else if (minimum_degrees == 2 && maximum_degrees == 2)
        cout << "ring topology" << endl;
    else if (minimum_degrees == 1 && maximum_degrees == number_nodes)
        cout << "star topology" << endl;
    else
        cout << "unknown topology" << endl;
}