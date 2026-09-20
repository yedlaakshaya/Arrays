class Solution {
public:
    void solve(vector<int>& num, int index, vector<vector<int>>& ans) {
        
        // Base case
        if (index == num.size()) {
            ans.push_back(num);
            return;
        }

        // Try every element from index to end
        for (int i = index; i < num.size(); i++) {
            
            // Choose
            swap(num[index], num[i]);

            // Explore
            solve(num, index + 1, ans);

            // Backtrack
            swap(num[index], num[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& num) {
        vector<vector<int>> ans;

        solve(num, 0, ans);

        return ans;
    }
};