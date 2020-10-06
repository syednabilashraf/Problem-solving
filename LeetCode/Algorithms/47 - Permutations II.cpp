class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        bool visited[nums.size()] = {false};
        bool used[nums.size()] = {false};
        sort(nums.begin(), nums.end());
        vector<vector<int>> solution;
        vector<int> current;
        backtrack(nums, current, solution, visited);
        
        return solution;
    }
    
    void backtrack(vector<int>& nums, vector<int>& current, vector<vector<int>>& solution, bool visited[])
    {
        if (current.size() == nums.size())
        {
            solution.push_back(current);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[i])
            {
                if (i > 0 && nums[i] == nums[i - 1])
                    if (visited[i - 1])
                    continue;
                current.push_back(nums[i]);
                visited[i] = true;
                backtrack(nums, current, solution, visited);
                visited[i] = false;
                current.pop_back();
            }
        }
    }
};