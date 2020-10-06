#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <limits>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;
    int cases = 1;
    while (testcases--)
    {
        int number_of_fights;
        cin >> number_of_fights;

        vector<vector<int>> Graph(20001);

        vector<int> Color;
        vector<bool> Visited;
        set<int> Vertices;

        // Number of fights is the number of edges.

        int current_max = 0;
        int current_minimum = INT_MAX;

        while (number_of_fights--)
        {
            int u, v;
            cin >> u >> v;

            if (u > current_max)
                current_max = u;

            if (v > current_max)
                current_max = v;

            if (u < current_minimum)
                current_minimum = u;

            if (v < current_minimum)
                current_minimum = v;

            Graph[u].push_back(v);
            Graph[v].push_back(u);
            Vertices.insert(u);
            Vertices.insert(v);
        }

        // cout << "Current max: " << current_max << endl;
        Graph.resize(current_max + 1);
        Color.resize(current_max + 1);
        Visited.resize(current_max + 1);

        // Now let's do a BFS on the graph.

        for (int i = 0; i < Visited.size(); i++)
        {
            Visited[i] = false;
        }

        for (int i = 0; i < Color.size(); i++)
        {
            Color[i] = 0;
        }

        int color = 1;
        int maximum = 0;

        for (auto i : Vertices)
        {
            int lycans = 0;
            int vampires = 0;

            if (Visited[i])
                continue;

            queue<int> BFSQueue;
            BFSQueue.push(i);
            Color[BFSQueue.front()] = 1;
            vampires++;

            while (!BFSQueue.empty())
            {
                int front = BFSQueue.front();

                for (int i = 0; i < Graph[front].size(); i++)
                {
                    if (Color[Graph[front].at(i)] == 0)
                    {
                        BFSQueue.push(Graph[front].at(i));
                        if (Color[front] == 1)
                        {
                            lycans++;
                            color = 2;
                        }
                        else
                        {
                            color = 1;
                            vampires++;
                        }

                        Color[Graph[front].at(i)] = color;
                    }
                }

                Visited[front] = true;
                BFSQueue.pop();
            }
            
            maximum = maximum + max(lycans, vampires);
        }
        cout << "Case " << cases++ << ": " << maximum << endl;
    }
}