#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> DFSStack;
bool visited[100] = { false };

void depth_first_search(vector< vector<int> > Graph, int start_node)
{
    DFSStack.push(start_node);
    visited[start_node] = true;
    for (int i = 0; i < Graph[start_node].size(); i++)
    {
        if (!visited[Graph[start_node].at(i)])
        {
            depth_first_search(Graph, Graph[start_node].at(i));
        }
    }
    cout << DFSStack.top() << " ";
    DFSStack.pop();
}

int main()
{
    
    int number_of_nodes;
    int number_of_edges;

    cin >> number_of_nodes;
    cin >> number_of_edges;

    vector< vector<int> > Graph(number_of_nodes);


    for (int i = 0; i < number_of_edges; i++)
    {
        int start;
        int end;

        cin >> start;
        cin >> end;

        Graph[start].push_back(end);
        Graph[end].push_back(start);
    }

    for (int i = 0; i < number_of_nodes; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < Graph[i].size(); j++)
        {
            cout << Graph[i].at(j) << " ";
        }
        cout << endl;
    }

    int start_node = 0;
    depth_first_search(Graph, start_node);
}