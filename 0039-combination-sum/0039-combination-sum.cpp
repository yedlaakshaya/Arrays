class Solution {
public:

    void solve(vector<int>& candidates, int target, int index,
               vector<int>& current, vector<vector<int>>& ans) {

        // Target reached
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        // Target became negative
        if (target < 0) {
            return;
        }

        // Try every candidate from index onwards
        for (int i = index; i < candidates.size(); i++) {

            // Choose the current number
            current.push_back(candidates[i]);

            // i is passed again because the same number
            // can be used unlimited times
            solve(candidates, target - candidates[i],
                  i, current, ans);

            // Backtrack
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                        int target) {

        vector<vector<int>> ans;
        vector<int> current;

        solve(candidates, target, 0, current, ans);

        return ans;
    }
};