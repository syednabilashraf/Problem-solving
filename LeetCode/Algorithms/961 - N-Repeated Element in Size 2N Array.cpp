class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int N = A.size() / 2;
        int map[10001] = {0};
        for (auto a : A)
        {
            map[a]++;
        }
        
        for (int i = 0; i < 10002; i++)
        {
            if (map[i] == N)
                return i;
        }
        return -1;
    }
};