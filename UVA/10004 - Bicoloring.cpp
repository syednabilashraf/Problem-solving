#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    while (true)
    {
        vector <int> graph[201];
        int nodes = 0;
        cin >> nodes;

        if (nodes == 0)
            return 0;
        
        int edges;
        cin >> edges;


        for (int i = 0; i < edges; i++)
        {
            int destination;
            int source;

            cin >> source >> destination;
            
            graph[source].push_back(destination);
            graph[destination].push_back(source);

        }

        queue<int> bfs_queue;
        bool flag = true;
        int current_color = 2;
        int colored[201] = {0};
        bfs_queue.push(0);
        colored[0] = 1;
        while (!bfs_queue.empty())
        {
            
            int front = bfs_queue.front();
            for (auto node : graph[front])
            {
                if (colored[node] == 0)
                {
                    colored[node] = -colored[front];
                    // cout << "Node: " << node << " Color: " << colored[node] << endl;
                    bfs_queue.push(node);
                }
                else if (colored[node] == colored[front])
                {
                    flag = false;
                    break;
                }
            }
            bfs_queue.pop();
        }
        if (flag == true)
        {
            cout << "BICOLORABLE." << endl;
        }
        else
        {
            cout << "NOT BICOLORABLE." << endl;
        }
    }
    return 0;
}