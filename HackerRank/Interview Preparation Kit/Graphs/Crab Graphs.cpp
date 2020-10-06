#include <bits/stdc++.h>


using namespace std;

vector<string> split_string(string);

/*
 * Complete the crabGraphs function below.
 */
int crabGraphs(int n, int t, vector<vector<int>> graph) {
    
    for (int i = 1; i <= n; i++)
    {
        cout << graph[i].size() << " ";
    }

    bool visited[n + 1] = {false};
    int vertices = 0;

    for (int i = 1; i <= n; i++)    
    {
        cout << i << endl;
        if (visited[i])
        {
            cout << "Hagu" << endl;
            continue;
        }
            
        if (graph[i].size() < t)
        {
            cout << "many" << endl;
            continue;
        }
            
        
        int taken = 0;

        for (auto a : graph[i])
        {
            if (taken == t)
                break;
            
            if (!visited[a])
            {
                visited[a] = true;
                taken++;
            }
            cout << "hagu" << endl;
        }

        vertices = vertices + t + 1;
    }

    return vertices;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int c;
    cin >> c;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int c_itr = 0; c_itr < c; c_itr++) {
        string ntm_temp;
        getline(cin, ntm_temp);

        vector<string> ntm = split_string(ntm_temp);

        int n = stoi(ntm[0]);

        int t = stoi(ntm[1]);

        int m = stoi(ntm[2]);

        vector<vector<int>> graph(m);
        for (int graph_row_itr = 0; graph_row_itr < m; graph_row_itr++) {
            graph[graph_row_itr].resize(2);

            for (int graph_column_itr = 0; graph_column_itr < 2; graph_column_itr++) {
                cin >> graph[graph_row_itr][graph_column_itr];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int result = crabGraphs(n, t, graph);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
