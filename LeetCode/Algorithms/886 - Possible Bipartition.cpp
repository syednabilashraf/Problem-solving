class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(N + 1);
        for (auto list : dislikes)
        {
            graph[list[0]].push_back(list[1]);
            graph[list[1]].push_back(list[0]);
        }
        
        int colored[N + 1] = { 0 };
        
        
        for (int i = 1; i <= N; i++)
        {
            if (colored[i] != 0)
                continue;
            queue<int> bfs_queue;
            bfs_queue.push(i);
            colored[i] = 1;
            while (!bfs_queue.empty())
            {
                int front = bfs_queue.front();
                bfs_queue.pop();
                
                for (int j = 0; j < graph[front].size(); j++)
                {
                    if (colored[graph[front][j]] == 0)
                    {
                        colored[graph[front][j]] = -colored[front];
                        bfs_queue.push(graph[front][j]);
                    }
                    else if (colored[graph[front][j]] == colored[front])
                        return false;
                }
            }
        }
        return true;
    }
};